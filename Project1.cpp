//
//  main2.cpp
//  HW1_Yadlapalli_Vivek
//
//  Created by ymmkrishna on 05/09/19.
//  Copyright © 2019 ymmkrishna. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string read_user_name(string msg1);
int read_integer(string msg2);
int add_two_integers(int a,int b);
double divided_two_integers(double a,double b);
int multiply_two_integers(int a, int b);
int sqsum_two_integers(int a,int b);

int main() {
    
    string name;
    double a,b;
    
    name = read_user_name("input user name:");
    
    a = read_integer("input the first number:");
    b = read_integer("input the second number:");
    int sum = add_two_integers(a,b);
    double div = divided_two_integers(a,b);
    int product = multiply_two_integers(a,b);
    int sqsum = sqsum_two_integers(a, b);
    cout << "Hello "<<name<<",\n"<<"the sum of "<<a<<" and "<<b<<" is "<<sum<<"\nthe ratio of "<<a<<" and "<<b<<" is "<<div<<"\nthe product of "<<a<<" and "<<b<<" is "<<product<<"\nthe squared sum of "<<a<<" and "<<b<<" is "<<sqsum<<endl;
    return 0;}

string read_user_name(string msg1){
    string nam;
    cout << msg1;
    getline(cin,nam);
    return nam; }

int read_integer(string msg2) {
    int num;
    cout << msg2;
    cin >> num;
    return num; }

int add_two_integers(int a, int b){
    return a+b; }

double divided_two_integers(double a, double b){
    return a/b; }

int multiply_two_integers(int a, int b){
    return a*b; }

int sqsum_two_integers(int a, int b) {
    return a*a+b*b;
    
}


