#include<iostream>
#include<conio.h>
using namespace std;

void australia(int);
void bangladesh(int);
void china(int);
void egypt(int);
void euro(int);
void india(int);
void mexico(int);
void saudi(int);
void swiss(int);
void usa(int);

Display(){

while(1){

cout<< "\n\n\t\t**World Currency Converter**\n\t\t----------------------------\n\n**Project Creator : Asif Akram  (Daffodil International University, 4th Semester)\n\t\t\t    [Phone : 01303119376]\n";
cout<< "\n *Choose your preferred Currency : \n";
cout<< "\n1. Australian Dollar (AUD)\n"<<"2. Bangladeshi Taka (BDT)\n"<<"3. Chinese Yuan (CNY)\n"<<"4. Egyptian Pound (EGP)\n"<<"5. Euro (EUR)\n"<<"6. Indian Rupee (INR)\n"<<"7. Mexican Peso (MXN)\n"<<"8. Saudi Riyal (SAR)\n"<<"9. Swiss Franc (CHF)\n"<<"10. US Dollar (USD)\n"<<"[11] Exit this program\n";
int your,cnvrt;
cout<< "\nYour choice - ";
cin>>your ;
cout<< "\n *Choose your Exchnage Currency : \n";
cout<< "\n1. Australian Dollar (AUD)\n"<<"2. Bangladeshi Taka (BDT)\n"<<"3. Chinese Yuan (CNY)\n"<<"4. Egyptian Pound (EGP)\n"<<"5. Euro (EUR)\n"<<"6. Indian Rupee (INR)\n"<<"7. Mexican Peso (MXN)\n"<<"8. Saudi Riyal (SAR)\n"<<"9. Swiss Franc (CHF)\n"<<"10. US Dollar (USD)\n";
cout<< "\nYour choice - ";
cin>>cnvrt;
cout<<endl;

    if(your == 1){
        australia(cnvrt);
    }
    else if(your == 2){
        bangladesh(cnvrt);
    }
    else if(your == 3){
        china(cnvrt);
    }
    else if(your == 4){
        egypt(cnvrt);
    }
    else if(your == 5){
        euro(cnvrt);
    }
    else if(your == 6){
        india(cnvrt);
    }
    else if(your == 7){
        mexico(cnvrt);
    }
    else if(your == 8){
        saudi(cnvrt);
    }
    else if(your == 9){
        swiss(cnvrt);
    }
    else if(your == 10){
        usa(cnvrt);
    }
    else if(your==11)
        break;
}
}


void australia(int cnvrt){
//1 AUD= 62.10 BDT, 4.58 CNY, 11.34 EGP, 0.64 EUR, 53.71 INR, 14.79 MXN, 2.71 SAR, 0.66 CHF, 0.72 USD
cout<<"\nEnter your [AUD] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 2){
        res=amount*62.10;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*4.58;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*11.34;
        cout<<"\n -->  "<<res<<" Egyptian pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.64;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*53.71;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*14.79;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*2.71;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.64;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.72;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void bangladesh(int cnvrt){
//1 BDT= 0.016 AUD, 0.074 CNY, 0.18 EGP, 0.010 EUR, 0.87 INR, 0.24 MXN, 0.044 SAR, 0.011 CHF, 0.012 USD
cout<<"\nEnter your [BDT] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.016;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 3){
        res=amount*0.074;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*0.18;
        cout<<"\n -->  "<<res<<" Egyptian pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.010;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*0.87;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*0.24;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*0.044;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.011;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.012;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}
void china(int cnvrt){

cout<<"\nEnter your [CNY] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.22;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*13.50;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 4){
        res=amount*2.47;
        cout<<"\n   "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.14;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*11.68;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*3.22;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*0.59;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.14;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.16;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void egypt(int cnvrt){
//i EGP
cout<<"\nEnter your [EGP] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.088;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*5.46;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*0.40;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.40;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*4.73;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*1.30;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*0.24;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.058;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.064;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void euro(int cnvrt){

cout<<"\nEnter your [EUR] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*1.58;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*97.37;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*7.22;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*17.80;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 6){
        res=amount*84.34;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*23.19;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*4.25;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*1.04;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*1.13;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void india(int cnvrt){

cout<<"\nEnter your [INR] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.019;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*1.16;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*0.086;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*0.21;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.012;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 7){
        res=amount*0.28;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*0.051;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.012;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.013;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void mexico(int cnvrt){

cout<<"\nEnter your [MXN] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.068;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*4.20;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*0.31;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*0.77;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.043;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*3.63;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 8){
        res=amount*0.18;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.045;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.049;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void saudi(int cnvrt){

cout<<"\nEnter your [SAR] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*0.37;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*22.92;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*1.70;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*4.18;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.24;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*19.80;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*5.45;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.25;
        cout<<"\n -->  "<<res<<" Swiss France.\n";
    }
    else if(cnvrt == 10){
        res=amount*0.27;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void swiss(int cnvrt){

cout<<"\nEnter your [CHF] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*1.52;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*93.45;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*6.92;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*17.06;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.96;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*80.69;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*22.23;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*4.08;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 10){
        res=amount*1.09;
        cout<<"\n -->  "<<res<<" US Dollar.\n";
    }
}

void usa(int cnvrt){

cout<<"\nEnter your [USD] amount - ";
float amount,res;
cin>> amount;

    if(cnvrt == 1){
        res=amount*1.40;
        cout<<"\n -->  "<<res<<" Australian Dollar.\n";
    }
    else if(cnvrt == 2){
        res=amount*86.07;
        cout<<"\n -->  "<<res<<" Bangladeshi Taka.\n";
    }
    else if(cnvrt == 3){
        res=amount*6.38;
        cout<<"\n -->  "<<res<<" Chinese Yuan.\n";
    }
    else if(cnvrt == 4){
        res=amount*15.72;
        cout<<"\n -->  "<<res<<" Egyptian Pound.\n";
    }
    else if(cnvrt == 5){
        res=amount*0.88;
        cout<<"\n -->  "<<res<<" EURO.\n";
    }
    else if(cnvrt == 6){
        res=amount*74.33;
        cout<<"\n -->  "<<res<<" Indian Rupee.\n";
    }
    else if(cnvrt == 7){
        res=amount*20.48;
        cout<<"\n -->  "<<res<<" Mexican Peso.\n";
    }
    else if(cnvrt == 8){
        res=amount*3.75;
        cout<<"\n -->  "<<res<<" Saudi Riyal.\n";
    }
    else if(cnvrt == 9){
        res=amount*0.92;
        cout<<"\n -->  "<<res<<" Swiss Franc.\n";
    }
}

int main(){
Display();
return 0;
}
