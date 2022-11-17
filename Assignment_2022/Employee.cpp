#include<bits/stdc++.h>
#include<stdio.h>
#include<conio.h>
#include "Employee.h"
#define MAX 1000

void Print_Line(int n){
    cout << endl;
    for(int i=0; i<n; i++){
        cout << "_";
    }
}


void Rating_NV(NV &nv){
    if(nv.Salary >= 15000000) strcpy(nv.XepLoai, "Gioi");
    else if(nv.Salary >= 10000000 && nv.Salary < 15000000) strcpy(nv.XepLoai, "Kha");
    else strcpy(nv.XepLoai, "Trung binh");
}


// Type
void Type_Information_NV(NV &nv, int Id){
    cout << endl << "Enter name: ";  fflush(stdin); gets(nv.Name);
    cout << "Enter email: ";  gets(nv.Email);
    cout << "Enter phone: ";  gets(nv.Phone);
    cout << "Enter age: ";  cin >> nv.Age;
    cout << "Enter Salary: ";  cin >> nv.Salary;
    nv.Id = Id;
    Rating_NV(nv);
}


void TypeNV(NV a[], int Id, int n){
    Print_Line(40);
    cout << endl << "Nhap nhan vien thu: " << n+1;
    Type_Information_NV(a[n], Id);
    Print_Line(40);
}


//Update
void Update_Information_NV(NV &nv){
    cout << endl << "Enter name: ";  fflush(stdin);  gets( nv.Name);
    cout << "Enter email: ";  gets( nv.Email);
    cout << "Enter phone: ";  gets( nv.Phone);
    cout << "Enter age: ";  cin >> nv.Age;
    cout << "Enter Salary: ";  cin >> nv.Salary;
    Rating_NV(nv);
}
 

void Update_NV(NV a[], int Id, int n){
    int find = 0;
    for(int i=0; i<n; i++){
        if(a[i].Id == Id){
            find = 1;
            Print_Line(40);
            cout << endl << "Cap nhat thong tin cua nhan vien co Id = " << Id;
            Update_Information_NV(a[i]);
            Print_Line(40);
            break;
        }
    }
    if(find == 0){
        cout << endl << "Nhan vien co Id = " << Id << " khong ton tai";
    }
}


// Delete

int Delete_By_Id(NV a[], int Id, int n){
    int find = 0;
    for(int i=0; i<n; i++){
        if(a[i].Id == Id){
            find = 1;
            Print_Line(40);
            for(int j=i; j<n; j++){
                a[j] = a[j+1];
            }
            cout << endl << "Da xoa nhan vien co Id = " << Id;
            Print_Line(40);
            break;
        }
    }
    if(find == 0){
        cout << endl << "Nhan vien co Id = " << Id << " khong ton tai";
        return 0;
    }
    else return 1;
}


int Delete_By_Name(NV a[], char Name[], int n){
    int find = 0;
    for(int i=0; i<n; i++){
        if(a[i].Name == Name){
            find = 1;
            Print_Line(40);
            for(int j=i; j<n; j++){
                a[j] = a[j+1];
            }
            cout << endl << "Da xoa nhan vien co ten = " << Name;
            Print_Line(40);
            break;
        }
    }
    if(find == 0){
        cout << endl << "Nhan vien co ten = " << Name << " khong ton tai";
        return 0;
    }
    else return 1;
}


int Delete_By_Age(NV a[], int Age, int n){
    int find = 0;
    for(int i=0; i<n; i++){
        if(a[i].Age == Age){
            find = 1;
            Print_Line(40);
            for(int j=i; j<n; j++){
                a[j] = a[j+1];
            }
            cout << endl << "Da xoa nhan vien co tuoi = " << Age;
            Print_Line(40);
            break;
        }
    }
    if(find == 0){
        cout << endl << "Nhan vien co tuoi = " << Age << " khong ton tai";
        return 0;
    }
    else return 1;
}



// Search
void Search_By_Name(NV a[], char Name[], int n){
    NV arrayFound[MAX];
    char name[30];
    int find = 0;
    for(int i=0; i<n; i++){
        strcpy(name, a[i].Name);
        if(strstr(strupr(name), strupr(Name))){
            arrayFound[find] = a[i];
            find++;
        }
    }
    Show_NV(arrayFound, find);
}


void Search_By_Phone(NV a[], char Phone[], int n){
    char phone[10];
    NV arrayFound[MAX];
    int find = 0;
    for(int i=0; i<n; i++){
        strcpy(phone, a[i].Phone);
        if(strstr(strupr(phone), strupr(Phone))){
            arrayFound[find] = a[i];
            find++;
        }
    }
    Show_NV(arrayFound, find);
}


void Search_By_Age(NV a[], int age, int n){
    NV arrayFound[MAX];
    int find = 0;
    for(int i=0; i<n; i++){
            if(age = a[i].Age){
                arrayFound[find] = a[i];
                find++;
            }
    }
    Show_NV(arrayFound, find);
}
    



// int Salary_Max(NV a[], int n){
//     int Salary_max = 0;
//     if(n>0){
//         Salary_max = a[0].Salary;
//         for(int i=1; i<n; i++){
//             if(a[i].Salary > Salary_max){
//                 Salary_max = a[i].Salary;
//             }
//         }
//     }
//     return Salary_max;
// }


int Id_Max(NV a[], int n){
    int IdMaxx = 0;
    if(n>0){
        IdMaxx = a[0].Id;
        for(int i=0; i<n; i++){
            if(a[i].Id > IdMaxx){
                IdMaxx = a[i].Id;
            }
        }
    }
    return IdMaxx;
}


// sort
// void Sort_By_Name(NV a[], int n){
//     // sap xep ten theo thu tu tang dan cua tu dien
//     NV temp;
//     string tenNV1;
//     string tenNV2;
//     for(int i=0; i<n; i++){
//         strcpy(tenNV1, a[i].Name);
//         for(int j=i+1; j<n; j++){
//             strcpy(tenNV2, a[j].Name);
//             if(strcmp(tenNV1, tenNV2) > 0){
//                 temp = a[i];
//                 a[i] = a[j]; 
//                 a[j] = temp;
//                 // or su dung swap
//             }
//         }
//     }
// }


void Sort_By_Age(NV a[], int n){
    NV temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].Age > a[j].Age){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                // or su dung swap
            }
        }
    }
}


void Sort_By_Salary(NV a[], int n){
    NV temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i].Salary > a[j].Salary){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                // or su dung swap
            }
        }
    }
}


void Show_NV(NV a[], int n){
    Print_Line(100);
    for(int i=0; i<n; i++){
        cout << endl;
        cout.width(10);  cout << i+1;
        cout.width(10);  cout << a[i].Id;
        cout.width(10);  cout << a[i].Name;
        cout.width(20);  cout << a[i].Email;
        cout.width(20);  cout << a[i].Phone;
        cout.width(10);  cout << a[i].Age;
        cout.width(10);  cout << a[i].Salary;
        cout.width(10);  cout << a[i].XepLoai;
    }
    Print_Line(100);
}


int Read_File(NV a[], char fileName[]){
    FILE * fp;
    int i=0; 
    fp = fopen(fileName, "r");
    cout << "Chuan bi doc file: ";
    puts(fileName);
    while(fscanf(fp, "%5d%30s%30s%30s%5d%30lld%30s", &a[i].Id, &a[i].Name, &a[i].Email, &a[i].Phone, &a[i].Age, &a[i].Salary, &a[i].XepLoai) != EOF){
        i++;
        cout << "Doc ban ghi thu: " << i << endl;
    }
    cout << "So luong nhan vien co san trong file la: " << i << endl;
    cout << endl;
    fclose(fp);
    return i;
}


void Write_File(NV a[], int n, char fileName[]){
    FILE * fp;
    fp = fopen(fileName, "w");
    for(int i=0; i<n; i++){
        fprintf(fp, "%5d%30s%30s%30s%5d%30lld%30s\n", a[i].Id, a[i].Name, a[i].Email, a[i].Phone, a[i].Age, a[i].Salary, a[i].XepLoai);

    }
    fclose(fp);
}


void Press_Any_Key(){
    cout << endl << endl << "Bam phim bat ki de tiep tuc: ";
    getch();

    system("cls");
}