#ifndef SENSOREGRAFICO_H
#define SENSOREGRAFICO_H

#include <QObject>
#include <QPushButton>
#include <QFrame>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QVBoxLayout>
#include <QtCharts>


class sensoreGrafico : public QObject {
    Q_OBJECT

public:
    sensoreGrafico(const QString &nome, QFrame *frame, QObject *parent = nullptr);

public slots:
    void updateChart();

private:
    QVector<double> generateRandomValues(int n);


    QString m_nome;
    QFrame *m_frame;
    QLineSeries *m_series;
    QChartView *m_chartView;
};

#endif // SENSOREGRAFICO_H
