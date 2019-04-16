#include "../headers/student.h"


student::student()
{
    egz = 0;
    Finale_suVidurkiu = 0;
    Finale_suMediana = 0;
    CorrectData = true;
    Med_ar_Vid = 2;
}


void student::setFirstName(std::string x){
    FirstName = x;
}
std::string student::getFirstName()const{
    return FirstName;
}


void student::setLastName(std::string x){
    LastName = x;
}
std::string student::getLastName()const{
    return LastName;
}


void student::set_egz(int exam_mark){
    egz = exam_mark;
}       
int student::get_egz()const{
    return egz;
}


void student::set_mark(double mark) {
    pazymiai.push_back(mark); 
}

int student::get_mark(int a){
    return pazymiai[a];
}

void student::ClearMark(){
    pazymiai.clear();
}

bool student::setCorrectData(bool x)
{
    CorrectData = x;
}
bool student::getCorrectData()
{
    return CorrectData;
}

double student::getFinale_suVidurkiu()const{
    return Finale_suVidurkiu;
}
double student::getFinale_suMediana()const{
    return Finale_suMediana;
}

double student::Calculate_suVidurkiu()
{
    double s = 0, avr = 0;

    for (int i=0; i < pazymiai.size(); i++)
    {
        s = s + pazymiai[i];
    }

    avr = s/pazymiai.size();
    Finale_suVidurkiu = 0.4 * avr + 0.6 * egz;
}


double student::Calculate_suMediana() 
{
    std::sort(pazymiai.begin(), pazymiai.end());  //sorting an array in ascending order

    double s = 0;
    if (pazymiai.size() % 2 == 0)
    {
        s = (double)((pazymiai[pazymiai.size()/2] + pazymiai[pazymiai.size()/2])/2);
    }
    else
    {
        s =(double)pazymiai[pazymiai.size()/2]; 
    }
    Finale_suMediana = 0.4 * s + 0.6 * egz;
}

void student::set_Med_ar_Vid(int choice){
    Med_ar_Vid = choice;
}
int student::get_Med_ar_Vid(){
    return Med_ar_Vid;
}

bool Compare_by_FirstName(const student& a, const student& b) 
{
    return a.getFirstName() < b.getLastName();
}

bool Compare_by_Results(const student &a, const student &b) 
{
    return a.getFinale_suVidurkiu() > b.getFinale_suVidurkiu();
}

bool Ar_Islaike (student &a) 
{
    return (a.getFinale_suVidurkiu() >= 5);
}