/////////////////////////////////////////////////////////////////////
// Name: Kristin Suarez
// Date: September 30, 2026
// Class: CSCI 1470.04
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: Simulates a public library system by tracking
// user IDs, books borrowed by each user, and the total books borrowed.
/////////////////////////////////////////////////////////////////////


#include <iostream>
#include <fstream>

using namespace std;

int totalBooks = 0; // Global variable to keep track of total books borrowed;
int generateUserID();
void borrowBook(int &bookCount);
void log(int uid, int bookCount);
void report();

int main()
{
    int uid, bookCount;
    
    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount); 
    
    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID(); 
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);
    
    // Reporting end-of-day transactions
    report();

    return 0;
}

int generateUserID()
{
    static int userID = 1000;
    userID++;
    return userID;
}

void borrowBook(int &bookCount)
{
    bookCount++;
    totalBooks++;
}

void log(int uid, int bookCount)
{
    ofstream outFile("log.txt", ios::app);
    outFile << "User Id ............" << uid << endl;
    outFile << "Books Borrowed ......" << bookCount << endl << endl;
    
}

void report()
{
    cout << "A total of " << totalBooks << " items were checked out today." << endl;

    ofstream outFile("log.txt", ios::app);
    outFile << "A total of " << totalBooks << " items were checked out today." << endl;
}
