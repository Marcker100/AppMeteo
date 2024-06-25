#include "sensoreGrafico.h"
#include "sensorePolveri.h"
#include "sensorePressione.h"
#include "sensoreTemp.h"
#include "sensoreUmid.h"
#include "sensoreUv.h"
#include <QDebug>

sensoreGrafico::sensoreGrafico(sensore* sens, QFrame *frame, QObject *parent)
    : QObject(parent), m_sensore(sens), m_frame(frame)
{
    m_series = new QLineSeries(this);
    m_chart = new QChart();
    m_chartView = new QChartView(m_chart, m_frame);
    m_chartView->setRenderHint(QPainter::Antialiasing);

    createEmptyChart();
}

void sensoreGrafico::createEmptyChart()
{
    m_chart->removeAllSeries();
    m_series->clear();

    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
    m_chart->setTitle(m_sensore->getNome() + " - Grafico");

    // Imposta il range dell'asse Y in base al tipo di sensore
    QValueAxis *axisY = qobject_cast<QValueAxis*>(m_chart->axisY());
    if (axisY) {
        if (dynamic_cast<const sensorePolveri*>(m_sensore)) {
            axisY->setRange(5.0, 30.0);
        } else if (dynamic_cast<const sensorePressione*>(m_sensore)) {
            axisY->setRange(990.0, 1030.0);
        } else if (dynamic_cast<const sensoreTemp*>(m_sensore)) {
            axisY->setRange(-10.0, 40.0);
        } else if (dynamic_cast<const sensoreUmid*>(m_sensore)) {
            axisY->setRange(20.0, 100.0);
        } else if (dynamic_cast<const sensoreUv*>(m_sensore)) {
            axisY->setRange(1.0, 10.0);
        }
    }

    QValueAxis *axisX = qobject_cast<QValueAxis*>(m_chart->axisX());
    if (axisX) {
        axisX->setRange(0, 23);  // Per 24 ore
        axisX->setTickCount(13); // Per mostrare ogni 2 ore
        axisX->setLabelFormat("%d");
    }

    m_chartView->setChart(m_chart);
    m_chartView->setMinimumSize(400, 300);
}

void sensoreGrafico::updateChartWithNewData()
{
    m_series->clear();

    // Usa RandomValueGenerator per generare valori
    m_sensore->accept(m_generator);
    QVector<double> values = m_generator.values;

    qDebug() << "Valori generati per " << m_sensore->getNome() << ": " << values;

    for (int i = 0; i < values.size(); ++i) {
        m_series->append(i, values[i]);
    }

    m_chart->removeSeries(m_series);
    m_chart->addSeries(m_series);
    m_chart->createDefaultAxes();
}
