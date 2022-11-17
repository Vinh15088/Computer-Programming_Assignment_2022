#ifndef Employee_h
#define Employee_h
#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
#define MAX 1000

class Employee {
    public:
        int Id;
        char Name[30];
        char Email[30];
        char Phone[30];
        int Age;
        long long Salary;
        char XepLoai[10];
};
typedef Employee NV;


void Print_Line(int n);
void Type_Information_NV(NV &nv, int Id);
void TypeNV(NV a[], int Id, int n);
void Update_Information_NV(NV &nv);
void Update_NV(NV a[], int Id, int n);
void Rating_NV(NV &nv);

// Delete
int Delete_By_Id(NV a[], int Id, int n);
int Delete_By_Name(NV a[], char Name[], int n);
int Delete_By_Age(NV a[], int Age, int n);


// Search
void Search_By_Name(NV a[], char Name[], int n);
void Search_By_Phone(NV a[], char Phone[], int n);
void Search_By_Age(NV a[], int age, int n);

// int Salary_Max(NV a[], int n);
int Id_Max(NV a[], int n);


//Sort
// void Sort_By_Name(NV a[], int n);
void Sort_By_Age(NV a[], int n);
void Sort_By_Salary(NV a[], int n);


void Show_NV(NV a[], int n);
int Read_File(NV a[], char fileName[]);
void Write_File(NV a[], int n, char fileName[]);
void Press_Any_Key();

#endif


