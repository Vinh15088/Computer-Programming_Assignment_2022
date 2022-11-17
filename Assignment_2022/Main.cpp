#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include "Employee.h"
#define MAX 1000
using namespace std;

NV arrayNV[MAX];
int main(){
    int key;
    char fileName[] = "data.txt";
    int soluongNV = 0;
    int IdCount = 0;
    soluongNV = Read_File(arrayNV, fileName);
    IdCount = Id_Max(arrayNV, soluongNV);

    while(true){
        cout << "CHUONG TRINH QUAN LY NHAN VIEN" << endl;
        cout << "MENU Bao Gom: " << endl;
        cout << "1. Them nhan vien: " << endl;
        cout << "2. Cap nhat thong tin nhan vien theo Id: " << endl;
        cout << "3. Xoa nhan vien theo Id: " << endl;
        cout << "4. Xoa nhan vien theo Name: " << endl;
        cout << "5. Xoa nhan vien theo Age: " << endl;
        cout << "6. Tim kiem nhan vien theo Name: " << endl;
        cout << "7. Tim kiem nhan vien theo Phone Number: " << endl;
        cout << "8. Tim kiem nhan vien theo Age: " << endl;
        cout << "9. Sap xep nhan vien theo Name: " << endl;
        cout << "10. Sap xep nhan vien theo Age: " << endl;
        cout << "11. Sap xep nhan vien theo Salary: " << endl;
        cout << "12. Hien thi danh sach nhan vien: " << endl;
        cout << "13. Ghi danh sach nhan vien vao file data.txt" << endl;
        cout << "0. Thoat: " << endl;
        cout << "Nhap tuy chon: ";
        cin >> key;
        switch(key){
            case 1:
                cout << endl << "1. Them nhan vien";
                IdCount++;
                TypeNV(arrayNV, IdCount, soluongNV);
                cout << endl << "Nhap nhan vien thanh cong";
                soluongNV++;
                Press_Any_Key();
                break;
            case 2:
                if(soluongNV > 0){
                    int Id;
                    cout << endl << "Cap nhat thong tin nhan vien";
                    cout << endl << "Nhap Id: "; cin >> Id;
                    Update_NV(arrayNV, Id, soluongNV);
                }
                else {
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 3:
                if(soluongNV > 0){
                    int Id;
                    cout << endl << "Xoa nhan vien theo Id";
                    cout << endl << "Nhap Id: ";
                    cin >> Id;
                    if(Delete_By_Id(arrayNV, Id, soluongNV) == 1){
                        cout << endl << "Nhan vien co Id = " << Id << " da bi xoa";
                        soluongNV--;
                    }
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 4:
                if(soluongNV > 0){
                    char Name[30];
                    cout << endl << "Xoa nhan vien theo Name";
                    cout << endl << "Nhap Name: ";
                    cin >> Name;
                    if(Delete_By_Name(arrayNV, Name, soluongNV) == 1){
                        cout << endl << "Nhan vien co Name = " << Name << " da bi xoa";
                        soluongNV--;
                    }
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 5:
                if(soluongNV > 0){
                    int Age;
                    cout << endl << "Xoa nhan vien theo Age";
                    cout << endl << "Nhap Age: ";
                    cin >> Age;
                    if(Delete_By_Age(arrayNV, Age, soluongNV) == 1){
                        cout << endl << "Nhan vien co Age = " << Age << " da bi xoa";
                        soluongNV--;
                    }
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 6:
                if(soluongNV > 0){
                    cout << endl << "Tim kiem nhan vien theo Name";
                    char Name[30];
                    cout << endl << "Nhap ten nhan vien: ";
                    fflush(stdin);
                    gets(Name);
                    Search_By_Name(arrayNV, Name, soluongNV);
                }
                else{
                    cout  << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 7:
                if(soluongNV > 0){
                    cout << endl << "Tim kiem nhan vien theo Phone Number";
                    char number[10];
                    cout << endl << "Nhap so dien thoai cua nhan vien: ";
                    cin >> number;
                    Search_By_Phone(arrayNV, number, soluongNV);
                }
                else{
                    cout  << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 8:
                if(soluongNV > 0){
                    cout << endl << "Tim kiem nhan vien theo Age";
                    int age;
                    cout << endl << "Nhap so tuoi cua nhan vien: ";
                    cin >> age;
                    Search_By_Age(arrayNV, age, soluongNV);
                }
                else{
                    cout  << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 9:
                if(soluongNV > 0){
                    // cout << endl << "Sap xep nhan vien theo Name";
                    // Sort_By_Name(arrayNV, soluongNV);
                    Show_NV(arrayNV, soluongNV);
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 10:
                if(soluongNV > 0){
                    cout << endl << "Sap xep nhan vien theo Age";
                    Sort_By_Age(arrayNV, soluongNV);
                    Show_NV(arrayNV, soluongNV);
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 11:
                if(soluongNV > 0){
                    cout << endl << "Sap xep nhan vien theo Salary";
                    Sort_By_Salary(arrayNV, soluongNV);
                    Show_NV(arrayNV, soluongNV);
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 12:
                if(soluongNV > 0){
                    cout << endl << "Hien thi danh sach nhan vien";
                    Show_NV(arrayNV, soluongNV);
                }
                else{
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                Press_Any_Key();
                break;
            case 13:
                if(soluongNV > 0){
                    cout << endl << "Ghi danh sach nhan vien vao file data.txt";
                    Write_File(arrayNV, soluongNV, fileName);
                }
                else {
                    cout << endl << "Danh sach nhan vien chua co du lieu";
                }
                cout << endl << "Ghi danh sach nhan vien vao file data.txt thanh cong!";
                Press_Any_Key();
                break;
            case 0:
                cout << endl << "Ban da thoat chuong trinh";
                // gets();
                return 0;
            default:
                cout << endl << "Hay chon chuc nang trong MENU";
                Press_Any_Key();
                break;
        }
    }
}
