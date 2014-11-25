// CPlusPrimerPlus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;


void Fun271();
void Fun272();
void Fun273();
void ThreeBlindMice();
void SeeHowTheyRun();
void Fun274();
void Fun275();
void Fun276();
void Fun277();
void showargs(int,int);
void Func372();
void Func373();
void Func374();
void Func375();
void Func376();
void Func377();
int _tmain(int argc, _TCHAR* argv[])
{
	Func377();
	return 0;
}

void Fun271()
{
	cout << "Name:Peter,Addr:China";
}
void Fun272()
{
	cout << "请输入LONG值（一LONG等于220码）";
	int num;
	cin >> num;

	cout << endl << num << "LONG = " << num * 200 << "码";
}
void Fun273()
{
	ThreeBlindMice();
	ThreeBlindMice();
	SeeHowTheyRun();
	SeeHowTheyRun();
}
void ThreeBlindMice()
{
	cout << "three blind mice" << endl;
}
void SeeHowTheyRun()
{
	cout << "see how they run" << endl;
}
void Fun274()
{
	cout << "Enter your age:";
	int age;
	cin >> age;
	cout << endl << "this age include " << age << " monthes" << endl;
}
void Fun275()
{
	cout << "Please enter a Celsius value:";
	double celsius;
	cin >> celsius;
	cout << endl << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit " << endl;
}
void Fun276()
{
	cout << "Enter the number of lightyears:";
	double lightyears;
	cin >> lightyears;
	cout << endl << lightyears << " lightyears = " << 63240 * lightyears << " astronomical units. " << endl;
}
void Fun277()
{
	cout << "Enter the number of hours:";
	int hour,minite;
	cin >> hour;
	cout << "Enter the number of minites:";
	cin >> minite;
	showargs(hour, minite);
}
void showargs(int hour, int minites)
{
	cout << "Time:" << hour << ":" << minites << endl;
}

void Func371()
{
	const int times = 12;
	cout << "Please enter inch:___";
	double inch;
	cin >> inch;

	int foot = (int)inch / times;
	double blance = inch - foot * times;

	cout << inch << "inch is " << foot << " foot and " << blance << " inch";
}
void Func372()
{
	const int foot2inch = 12;
	const double kg2pound = 2.2;
	const double inch2m = 0.0254;
	cout << "Please enter foot:___";
	int foot;
	cin >> foot;
	cout << "Please enter inch:___";
	double inch;
	cin >> inch;
	cout << "Please enter pound:___";
	double pound;
	cin >> pound;

	double kg = pound / 2.2;
	double m = ((foot * foot2inch) + inch) * inch2m;
	double bmi = kg / (m*m);
	cout << "BMI is " << bmi;
}
void Func373()
{
	const int convert = 60;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	
	cout << "First, enter the degrees:";
	int degrees;
	cin >> degrees;
	
	cout << "Next, enter the minutes of arc:";
	int minutes;
	cin >> minutes;

	cout << "Finally, enter the seconds of arc:";
	int seconds;
	cin >> seconds;

	double result = degrees + (minutes*1.0 / convert) + (seconds*1.0 / (convert*convert));

	cout << degrees << " degress, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees.";
}
void Func374()
{
	const double convert = 60;

	cout << "Enter the number of seconds:";

	long sec;
	cin >> sec;

	long minutes = sec / convert;
	long hours = minutes / convert;
	long days = hours / 24;

	cout << sec << " seconds = " << days << " days, " << (hours- days *24) << " hours, " << (minutes- hours*convert) << " minutes, " << sec-(minutes*convert) << " seconds.";
}
void Func375()
{
	const double convert = 60;

	cout << "Enter the world's population:";
	long long world;
	cin >> world;

	cout << "Enter the population of us:";
	long long us;
	cin >> us;

	double percent = us*100.0 / world;

	cout << "The population of the US is " << percent << "% of the world's population.";
}
void Func376()
{
	cout << "Enter the km:";
	int km;
	cin >> km;

	cout << "Enter the gas litre:";
	int litre;
	cin >> litre;

	double result = litre * 100.0 / km;

	cout << "100 km use gas " << result << " litre.";
}
void Func377()
{
	const double gallon2litre = 3.875;
	const double km2mile = 0.6214;

	cout << "Enter the l/km:";
	double litre;
	cin >> litre;

	double mile = 100 * km2mile;
	double gallon = litre / gallon2litre;
	double result = mile / gallon;

	cout << litre << " l/km = " << result << " mpg.";
}