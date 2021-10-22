//Another Banger!!::
//Feature Versions coming Soon!!!::
//FMOD:
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>
using namespace std;

#define high 100
#define format 10

void prompt(),help(),contactAuthor();
void CF(),DF(),RF(),CFE();
void MainMenu(){
    cout << "---------------------------------------------\n\n";
    cout << " FMOD " << "Created by AbdulRahman AbdulAzeez\n\n";
    cout << "------------------------------------------V1.1\n";
    cout << "Version 2 Coming Soon!\n\n";
}

int main(void){
MainMenu();

cout << " [1]  Create a File.\n";
cout << " [2]  Delete a File.\n";
cout << " [3]  Rename a File.\n";
cout << " [4]  Check a File's existence.\n";
cout << " [5]  Help.\n";
cout << " [0]  Contact Author.\n";
cout << " [00] Exit.\n";
cout << "\nMore Options will be made available in the next Version!\n\n";
cout << "Select an Option: ";
string opt;
cin >> opt;

if(opt=="1"){
    system("CLS");
    MainMenu();
    CF();
}
else if(opt=="2"){
    system("CLS");
    MainMenu();
    DF();
}
else if(opt=="3"){
    system("CLS");
    MainMenu();
    RF();
}
else if(opt=="4"){
    system("CLS");
    MainMenu();
    CFE();
}
else if(opt=="5"){
    system("CLS");
    MainMenu();
    help();
}
else if(opt=="00"){
    return 0;
}
else if(opt=="0"){
    system("CLS");
    MainMenu();
    contactAuthor();
}
else {
    exit(1);
}

return 0;
}

void CF(){
    cout << "Enter the filename you want to create: ";
    string Fname;
    cin >> Fname;
    cout << "\n~~Note: If you choose txt as format it will generate error due to a bug we will fix in the next version.\nWe apologize for any inconvenience caused.~~\n"
    << "\nEnter the format(html,dat e.t.c) you want it to be created in: ";
    char Fmat[high];
    cin >> Fmat;
    char dot[format]=".";
    strcat(dot,Fmat);
    fstream CFile;
    CFile.open(Fname+dot, ios::out);
    cout << "Creating File....\n\n";
        if(&CFile){
            cout << "\aFile created successfully!\n";
        }
        else {
            cerr << "\aError creating File!\n";
        }
        CFile.close();
        prompt();
}

void DF(){
    cout << "Enter the file name/path you want to delete: ";
    char fname[high];
    cin >> fname;
    int remover;
    remover=remove(fname);
    cout << "Deleting File......\n\n";
        if(!&remover){
            cerr << "\aError deleting file.!";
        }
        else {
            cout << "\aFile Deletion successful.!";
        }
        prompt();
}

void RF(){
    cout << "Enter the current File's name/path you want to rename: ";
    char fname[high];
    cin >> fname;
    cout << "Enter the File's new name: ";
    char NewName[high];
    cin >> NewName;
    int renamer;
    renamer=rename(fname,NewName);
    cout << "Renaming File....\n\n";
        if(&renamer==NULL){
            cerr << "\aError renaming file.!";
        }
        else {
            cout << "\aFile renamed successfully.!";
        }
        prompt();
}

void CFE(){
    cout << "Enter File name/path you want to check existence: ";
    char fname[high];
    cin >> fname;
    fstream checker;
    checker.open(fname, ios::in);
    cout << "Checking File's existence.....\n\n";
        if(&checker){
            cout << "\a\nFile found.!";
        }
        else {
            cerr << "\a\nError finding/reading file!.";
        }
        checker.close();
        prompt();
}

void prompt(){
    cout << "\n\n\nDo you want to go to main menu?[Yes/No]";
    string choice;
    cin >> choice;
        if (choice=="Yes"||choice=="yes"||choice=="YES"){
            system("cls");
            main();
        }
        if (choice=="No"||choice=="no"||choice=="NO"){
            exit(1);
        }
        else {
            exit(0);
    }
}

void help(){
    cout << "\nFMOD(File Moderator) is a program which helps a user manipulate files in different ways.\n";
    cout << "It makes manipulation of files easy, fast and great with inclusion of features like:\n";
    cout << "- File Deletion.\n";
    cout << "- File Creation.\n";
    cout << "- Renaming of Files.\n";
    cout << "- Checking File existence.\n\n";
    cout << "More features like encryption and decryption of file as well as checking file for empty\n";
    cout << "or otherwise contents will be included in next version which will be version 2.\n";
    cout << "Note that, Version 2 & 3 will also be made more comprehensive for very easy use.\n";
    cout << "Version 3 will also be released and password generation and writing the generated passwords to a file\n";
    cout << "will be included as well as encryption and decryption of the generated password file for safety of you privacy.\n";
    cout << "\nNote: Do not interfere .txt extension to this program i.e do not relate .txt to the program due to a bug\n";
    cout << "that gives an error. The bug will be fixed in the next version of the program!.\n";
    cout << "We apologize for any inconvenience caused.!\n\n";
    cout << "We hope you have a great experience working with this program!!!\n\n";
    system("PAUSE");
    system("CLS");
    main();
}

void contactAuthor(){
    cout << "You can contact me @\n";
    cout << "https://web.facebook.com/abdulrahman.abdulazeez.5243/\n\n\n";
    system("PAUSE");
    system("CLS");
    main();
}


