// traffic_light.h
#ifndef TRAFFIC_LIGHT_H
#define TRAFFIC_LIGHT_H

#include <QWidget>

class QRadioButton;

class TrafficLight: public QWidget{
  Q_OBJECT

public:
  TrafficLight(QWidget * parent = nullptr);

public slots:
  void light_update();

private:
  enum class State {Red, Green, Yellow}
  State state;
  QRadioButton * redlight;
  QRadioButton * yellowlight;
  QRadioButton * greenlight;
};

#endif
