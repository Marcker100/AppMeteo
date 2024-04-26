#include "sensoreGrafico.h"
#include <cstdlib> // per rand() e RAND_MAX
#include <ctime> // per time()
#include <QtGlobal>  // For Q_COREAPP_EXPORT
#include <QtCore/QRandomGenerator>

sensoreGrafico::sensoreGrafico(const QString &tipo, QFrame *frame, QObject *parent)
    :QObject(parent), m_nome(tipo), m_frame(frame), m_series(new QLineSeries()), m_chartView(nullptr) {
    // Inizializza il generatore di numeri casuali.
    srand(time(NULL));

    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(m_series);
    chart->createDefaultAxes();
    chart->setTitle("Sensor Data");

    m_chartView = new QChartView(chart);
    QVBoxLayout *layout = new QVBoxLayout(m_frame);
    layout->addWidget(m_chartView);
}

void sensoreGrafico::updateChart() {
    int numValori=10;
    QVector<double> newValue = generateRandomValues(numValori);
    for(int i = 0; i < numValori; ++i){
        m_series->append(i, newValue[i]);
    }
    m_chartView->update();
}



QVector<double> sensoreGrafico::generateRandomValues(int numValori) {
    qreal lowerBound, upperBound;
    qInfo() << "Sensore in uso: " << m_nome;

    // Imposta i limiti per ogni sensore
    if (m_nome == "Temperatura") {
        lowerBound = -10.0;
        upperBound = 35.0;
    } else if (m_nome == "Umidità") {
        lowerBound = 10.0;
        upperBound = 100.0;
    } else if (m_nome == "Polveri Sottili") {
        lowerBound = 0.0;
        upperBound = 5.0;
    } else {
        return QVector<double>(); // Restituisce un vettore vuoto se il sensore non è riconosciuto
    }

    // Genera un QVector di valori casuali
    QVector<double> valori;
    QRandomGenerator generatore; // Generatore di numeri casuali
    for (int i = 0; i < numValori; ++i) {
        valori.append(lowerBound + generatore.bounded(upperBound - lowerBound));
    }

    return valori;
}


