#include "window.h"
 //#include "adcreader.h"



#include <cmath>  // for sine stuff


Window::Window() : gain(5), count(0)
{
//	knob = new QwtKnob;
	// set up the gain knob
	//knob->setValue(gain);

	// use the Qt signals/slots framework to update the gain -
	// every time the knob is moved, the setGain function will be called
	//connect( knob, SIGNAL(valueChanged(double)), SLOT(setGain(double)) );



	//set three push buttons
	pushbutton1 = new QPushButton;
	pushbutton1->setText(tr("Learning"));
	pushbutton2 = new QPushButton;
	pushbutton2->setText(tr("Testing"));
    pushbutton3 = new QPushButton;
	pushbutton3->setText(tr("Recognising"));
	//set pushbuttons colors
	//setStyleSheet("QPushButton::checked{background-color: red;color: white;} "
                     //  "\n "
                       // "QPushButton{background-color:  black;color: white;}");
	//pushbutton1->setFixedHeight(35);   //train to set fixed size
   // pushbutton1->setFixedWidth(35);    //training to set fixed size
   //change shape of pushbutton
	//QRegion* region = new QRegion(*(new QRect(pushbutton2->x()+5,pushbutton2->y()+5,50,50)),QRegion::Ellipse);
    //pushbutton2->setMask(*region);
   
   //if (pushbutton1 == true )
   //{
	 //  pushbutton1 = new QPushButton;
      // pushbutton1->setText(tr("clicked"));
  // }
	pushbutton1->show();
	pushbutton2->show();
    pushbutton2->show();

    //set Analog clock 
	//clock = new QwtAnalogClock;
	//clock->show();
    //clock->scaleDraw()->setPenWidth(3);
   // clock->setLineWidth(6);
   // clock->setFrameShadow(QwtDial::Sunken);
     
	//set Text
    plot = new QwtPlot;
	title = new QwtPlotTextLabel;
	QwtText title( "Welcome to the Smart Intonation game" );
    title.setRenderFlags( Qt::AlignHCenter | Qt::AlignTop );
    QFont font;
    font.setBold( true );
    title.setFont( font );
    QwtPlotTextLabel *titleItem = new QwtPlotTextLabel();
    titleItem->setText( title );
	titleItem->show();
    titleItem->attach(plot);
	plot->replot();
     plot->show();


	


    //set counter
    counter = new QwtCounter;
    QwtCounter *counter = new QwtCounter();
    counter->setRange(0.0, 100.0);                  // From 0.0 to 100
    counter->setSingleStep( 1.0 );                  // Step size 1.0
    counter->setNumButtons(2);                      // Two buttons each side
    counter->setIncSteps(QwtCounter::Button1, 1);   // Button 1 increments 1 step
    counter->setIncSteps(QwtCounter::Button2, 20);  // Button 2 increments 20 steps
  //connect(counter, SIGNAL(valueChanged(double)), counter, SLOT(newValue(double)));

	// set up the thermometer
	//thermo = new QwtThermo; 
	//thermo->setFillBrush( QBrush(Qt::red) );
	//thermo->setRange(0, 20);
	//thermo->show();


	// set up the initial plot data
	//for( int index=0; index<plotDataSize; ++index )
	//{
		//xData[index] = index;
		//yData[index] = gain * sin( M_PI * index/50 );
	//}

	//curve = new QwtPlotCurve;
	
	// make a plot curve from the data and attach it to the plot
	//curve->setSamples(xData, yData, plotDataSize);
	//curve->attach(plot);

	//plot->replot();
//	plot->show();
       
	// set up the layout - knob above thermometer
	vLayout = new QVBoxLayout;
	//vLayout->addWidget(counter);
	//vLayout->addWidget(clock);

	//vLayout->addWidget(knob);
	//vLayout->addWidget(thermo);
	vLayout->addWidget(pushbutton1);
	vLayout->addWidget(pushbutton2);
	vLayout->addWidget(pushbutton3);
   
     
	
	// plot to the left of knob and thermometer
	hLayout = new QHBoxLayout;
	hLayout->addLayout(vLayout);
	
	hLayout->addWidget(plot);           ///plot the graph on the same interface

	setLayout(hLayout);

	// This is a demo for a thread which can be
	// used to read from the ADC asynchronously.
	// At the moment it doesn't do anything else than
	// running in an endless loop and which prints out "tick"
	// every second.
//	adcreader = new ADCreader();
//	adcreader->start();
}

Window::~Window() {
	// tells the thread to no longer run its endless loop
//	adcreader->quit();
	// wait until the run method has terminated
//	adcreader->wait();
//	delete adcreader;
}

void Window::timerEvent( QTimerEvent * )
{
	//double inVal = gain * sin( M_PI * count/50.0 );
	//++count;

	// add the new input to the plot
	//memmove( yData, yData+1, (plotDataSize-1) * sizeof(double) );
	//yData[plotDataSize-1] = inVal;

	//curve->setSamples(xData, yData, plotDataSize);
	//plot->replot();

	// set the thermometer value
	//thermo->setValue( inVal + 10 );
}


// this function can be used to change the gain of the A/D internal amplifier
void Window::setGain(double gain)
{
	// for example purposes just change the amplitude of the generated input
	this->gain = gain;
}
