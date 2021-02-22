#ifndef WINDOW_H
#define WINDOW_H
#include <qwt/qwt_arrow_button.h>
#include <qwt/qwt_thermo.h>
#include <qwt/qwt_knob.h>
#include <qwt/qwt_plot.h>
#include <qwt/qwt_plot_marker.h>          // by me
#include <qwt/qwt_plot_curve.h>
#include <qwt/qwt_compass.h>                  //Compass
#include <qwt/qwt_analog_clock.h>             //clock
#include <qwt/qwt_counter.h>                      //counter button
#include <qwt/qwt_plot_textlabel.h>                  //Text

#include <QBoxLayout>

// #include "adcreader.h"

// class definition 'Window'
class Window : public QWidget
{
	// must include the Q_OBJECT macro for for the Qt signals/slots framework to work with this class
	Q_OBJECT

public:
	Window(); // default constructor - called when a Window is declared without arguments

	~Window();

	void timerEvent( QTimerEvent * );

public slots:
	void setGain(double gain);

// internal variables for the window class
private:
//	QwtKnob      *knob;
	//QwtThermo    *thermo;
	//QwtPlotCurve *curve;

	QPushButton *pushbutton1;
	QPushButton *pushbutton2;
	QPushButton *pushbutton3;
    QwtPlot *plot;
    QwtAnalogClock *clock;           //clock
	QwtCounter *counter;             //counter
	QwtPlotTextLabel *title;          //text

	// layout elements from Qt itself http://qt-project.org/doc/qt-4.8/classes.html
	QVBoxLayout  *vLayout;  // vertical layout
	QHBoxLayout  *hLayout;  // horizontal layout

	static const int plotDataSize = 100;

	// data arrays for the plot
	double xData[plotDataSize];
	double yData[plotDataSize];

	double gain;
	int count;

//	ADCreader *adcreader;
};

#endif // WINDOW_H
