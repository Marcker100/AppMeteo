#ifndef SENSOREGRAFICO_H
#define SENSOREGRAFICO_H

#include <QObject>
#include <QFrame>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QtCharts>
#include "sensore.h"
#include "RandomValueGenerator.h"

class sensoreGrafico : public QObject {
    Q_OBJECT
public:
    sensoreGrafico(sensore* sens, QFrame *frame, QObject *parent = nullptr);
    QChartView* getChartView() const { return m_chartView; }
    void createEmptyChart();
    void updateChartWithNewData();
    void setSensore(sensore* nuovoSensore);

private:
    sensore* m_sensore;
    QFrame *m_frame;
    QLineSeries *m_series;
    QChartView *m_chartView;
    QChart *m_chart;
    RandomValueGenerator m_generator;
};

#endif // SENSOREGRAFICO_H
