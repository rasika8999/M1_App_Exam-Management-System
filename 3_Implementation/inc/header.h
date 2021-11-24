/**
@file managemant_operation.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<ctype.h>
 
#define MAX_YR  9999
#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#define FILE_NAME  "studentRecordSystem.bin"
 
#define MAX_FATHER_NAME 50
#define MAX_STUDENT_NAME 50
#define MAX_STUDENT_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)
 
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;
 
typedef struct 
{
    unsigned int student_id;  
    char fatherName[MAX_FATHER_NAME]; 
    char studentName[MAX_STUDENT_NAME]; 
    char studentAddr[MAX_STUDENT_ADDRESS]; 
    Date studentJoiningDate; 
} s_StudentInfo;
{ 
void printMessageCenter(const char* message)
/** printing message*/
}
{
void headMessage(const char *message)
/* print head message */
 }
{

 int isNameValid(const char *name)
 }

{
    
void addStudentInDataBase()
/** Adding student database*/
 }

{
 void viewStudent()
  /** view the student details*/
 }

{
 void deleteStudent()
/** delete  student data */
 }

{
 void updateCredential(void)
/** update the credential data*/
 }

{
 void menu()
/** selection choice
    
        
        case 1:
            addStudentInDataBase();
            break;
        case 2:
            searchStudent();
            break;
        case 3:
            viewStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            updateCredential();
            break;
        case 0:
           
            break;
       */
 }

{
 int main()
/**
    init();
    welcomeMessage();
    login();
    return 0;
*/
 }

