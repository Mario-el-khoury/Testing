#include "window.h"
 //#include "adcreader.h"
#include <QAudioInput>
#include <QAudioRecorder>
#include <QMediaPlayer>
//#include <QVideoWidget>
#include <cmath>  // for sine stuff


Window::Window() : gain(5), count(0)
{
	setWindowTitle("Welcome to the Smart Intonation Game");  //set title
    //knob = new QwtKnob;
	// set up the gain knob
	//knob->setValue(gain);

	// use the Qt signals/slots framework to update the gain -
	// every time the knob is moved, the setGain function will be called
	//connect( knob, SIGNAL(valueChanged(double)), SLOT(setGain(double)) );
    ///// Audio Recorder //////
	

	//set push buttons
	pushbutton1 = new QPushButton;            
	pushbutton1->setText(tr("Learning"));         //type on the button
	pushbutton1->setFixedHeight(40);             //set a fixed height
	pushbutton1->setFixedWidth(150);            //set a fixed width

	pushbutton2 = new QPushButton;
	pushbutton2->setText(tr("Testing"));
	pushbutton2->setFixedHeight(40);
	pushbutton2->setFixedWidth(150);

    pushbutton3 = new QPushButton;
	pushbutton3->setText(tr("Recognising"));
	pushbutton3->setFixedHeight(40);
	pushbutton3->setFixedWidth(150);

	quitbutton = new QPushButton;
	quitbutton->setText(tr("Quit"));
	quitbutton->setFixedHeight(30);
	quitbutton->setFixedWidth(100);

    stopbutton = new QPushButton;
	stopbutton->setText(tr("stop"));
	stopbutton->setFixedHeight(30);
	stopbutton->setFixedWidth(100);

	//set pushbuttons colors
	//setStyleSheet("QPushButton::checked{background-color: red;color: white;} "
    //  "\n "
    // "QPushButton{background-color:  black;color: white;}");
					   
    //QPushButton *pushbutton1 = new QPushButton(this);      // to open new window when pressing pushbutton
    // QWidget *widget = new QWidget(this);
    //widget->setWindowFlags(Qt::Window);
     // widget->setWindowTitle("New Window");
   //connect(pushbutton1, SIGNAL(clicked()), widget, SLOT(show()));

   connect(pushbutton1, SIGNAL(clicked()), this, SLOT(playslot()));
   connect(stopbutton, SIGNAL(clicked()), this, SLOT(pauseslot()));
   //connect(controls, SIGNAL(stop()), player, SLOT(stop()));
   connect(quitbutton, SIGNAL(clicked()), this, SLOT(quitApp()));

	pushbutton1->show();
	pushbutton2->show();
    pushbutton3->show();
	quitbutton->show();

	//audioRecorder = new QAudioRecorder;
   // QAudioEncoderSettings audioSettings;
   // audioSettings.setCodec("audio/amr");
   // audioSettings.setQuality(QMultimedia::HighQuality);
  // audioRecorder->setEncodingSettings(audioSettings);
   // audioRecorder->setOutputLocation(QUrl::fromLocalFile("home/mario/project2"));
   // audioRecorder->record();
    ///
	
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
	//vLayout->addWidget(w);
	
	vLayout->addWidget(pushbutton1); 
	  
	vLayout->addWidget(pushbutton2);
	vLayout->addWidget(pushbutton3);
	
    vLayout->addWidget(quitbutton);
	
	// plot to the left of knob and thermometer
	hLayout = new QHBoxLayout;
	hLayout->addLayout(vLayout);
	//hLayout->addWidget(w);
   
	
	
	//hLayout->addWidget(plot);           ///plot the graph on the same interface
    
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

//this function is used to act whenever pushbutton 1 is pressed
void Window::playslot()    
{  
	 stopbutton->show();
	 hLayout->addWidget(stopbutton); 
	 
	 player = new QMediaPlayer;
	 player->setMedia(QUrl::fromLocalFile("/home/mario/Test/qwt-example/C-scale.mp3"));
	 player->setVolume(50);           // set the volume 
     player->play();                 //play the song
	 pushbutton1->setDisabled(true);     //disable every button in the app while listening to avoid conflicts
	 pushbutton2->setDisabled(true);
	 pushbutton3->setDisabled(true);
} 
//this function is used to pause the learning video
void Window::pauseslot()  
{ 
    player->pause();             //pause the song then enable the user to press any button 
    pushbutton1->setEnabled(true);     
	pushbutton2->setEnabled(true);
	pushbutton3->setEnabled(true);
	stopbutton->hide();
}



//this function is used to quit the application
void Window::quitApp()    
{ 
    Window::close();
   
}


