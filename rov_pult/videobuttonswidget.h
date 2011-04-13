#ifndef VIDEOBUTTONSWIDGET_H
#define VIDEOBUTTONSWIDGET_H

#include <QtGui/QWidget>
#include <QGroupBox>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QAbstractButton>
#include <QObject>

class VideoButtonsWidget : public QGroupBox
{
    Q_OBJECT

private:
    int activeCamera;//����� ������������ ��������
    QRadioButton *button;//[3];
 public:
    VideoButtonsWidget(QWidget *parent = 0);
    ~VideoButtonsWidget();
    int getActiveCamera();
    void indicate(int n);//���� ������ ���� �����������, ���������� ��������
private slots:
    void setActiveCamera();//���������� ��� ������� ��������
signals:
    void cameraChanged(int );
};

#endif // VIDEOBUTTONSWIDGET_H
