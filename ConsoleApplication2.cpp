#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

//When I started this project, only god and I knew what I was trying to accomplish.
//Now only god knows.
//
//Dear Professor.
//I know this isn't even game ready.
//But I'm too afraid to speak up in class about needing help.
//I've tried countless times to rewrite the whole file or even just the section below to turn it into an array, but I keep getting error after error.
//It would take until the end of this course just to finish this one assignment.
//I'm so sorry, but I need to hand this in at this point.
//I've commented everything to the best of my ability and I will be happy to send the latest rewrite attempt upon request.
//
//Dear future me, if you dare try to "fix" this code again and end up going back to this build.
//Please add to the counter as a warning for the next attempt.
//int totalDaysSpentWorkingOnThisAssignment = 14;

int main()
{
    //This section lists the available items and how much can be purchased, as well as sold.
    int select;
    int coins = 900;
    int bandanna = 1;
    int gloves = 1;
    int glasses = 0;
    int glassesstock = 1;
    int notebook = 0;
    int notebookstock = 1;
    int consumable = 0;
    int consumable2 = 0;
    int consumablecandy = 99;
    system("cls");
    cout << "You got 900 GOLD!" << endl;
    system("pause");

//This is where the gameplay starts, using switch statements to decide where to go.
begin:
    system("cls");
    cout << "You notice a shop in the distance. You decide to..." << endl;
    cout << "[1.] Enter it." << endl;
    cout << "[2.] Leave." << endl;
    cout << "> ";
    cin >> select;
    switch (select) {
        //You enter the shop.
shop:
    case 1:
        system("cls");
        cout << "Woah there! I've got some neat junk for sale!" << endl;
        cout << "1. Buy" << endl;
        cout << "2. Sell" << endl;
        cout << "3+. Leave" << endl;
        cout << "> ";
        cin >> select;
        switch (select) {
            //You decide to buy something.
        purchase:
        case 1:
            system("cls");
            cout << "What are you lookin for?" << endl;
            cout << "(You currently have " << coins << "G.)" << endl;
            cout << "1. Crab Apple - 25G" << endl;
            cout << "2. Sea Tea - 18G" << endl;
            cout << "3. Cloudy Glasses - 30G" << endl;
            cout << "4. Torn Notebook - 55G" << endl;
            cout << "5+. Leave" << endl;
            cout << "> ";
            cin >> select;
            switch (select) {
            case 1:
                if (coins < 25) { //This section checks if the player has enough money to buy this item and declines if they don't have enough.
                    system("cls");
                    cout << "> Eh? You can't afford it?" << endl;
                    cout << "> ";
                    system("pause");
                    goto purchase;
                }
                else {
                    system("cls");
                    coins = coins - 25; //This removes the money from the player's inventory and gives them the item.
                    consumable = consumable + 1;
                    cout << "> (You bought a Crab Apple!)" << endl;
                    cout << "> Thanks! Wa ha ha." << endl;
                    system("pause");
                    goto purchase;
                }

            case 2:
                if (coins < 18) { //This section checks if the player has enough money to buy this item and declines if they don't have enough.
                    system("cls");
                    cout << "> Eh? You can't afford it?" << endl;
                    cout << "> ";
                    system("pause");
                    goto purchase;
                }
                else { //This removes the money from the player's inventory and gives them the item.
                    system("cls");
                    coins = coins - 18;
                    consumable2 = consumable2 + 1;
                    cout << "> (You bought Sea Tea!)" << endl;
                    cout << "> Thanks! Wa ha ha." << endl;
                    cout << "> ";
                    system("pause");
                    goto purchase;

                }

            case 3:
                if (coins < 30) { //This section checks if the player has enough money to buy this item and declines if they don't have enough.
                    system("cls");
                    cout << "> Eh? You can't afford it?" << endl;
                    cout << "> ";
                    system("pause");
                    goto purchase;
                }
                else { //This section checks if the shopkeeper has the item.
                    if (glassesstock > 0) {
                        system("cls");
                        coins = coins - 30;
                        glasses = glasses + 1;
                        glassesstock = glassesstock - 1;
                        cout << "> (You bought Cloudy Glasses!)" << endl;
                        cout << "> Thanks! Wa ha ha." << endl;
                        cout << "> ";
                        system("pause");
                        goto purchase;
                    }
                    else {
                        system("cls");
                        cout << "> Sorry, we're sold out!" << endl;
                        cout << "> ";
                        system("pause");
                        goto purchase;
                    }
                }
            case 4:
                if (coins < 55) {//This section checks if the player has enough money to buy this item and declines if they don't have enough.
                    system("cls");
                    cout << "> Eh? You can't afford it?" << endl;
                    cout << "> ";
                    system("pause");
                    goto purchase;
                }
                else {
                    if (notebookstock > 0) {//This section checks if the shopkeeper has the item.
                        system("cls");
                        coins = coins - 55;
                        notebook = notebook + 1;
                        notebookstock = notebookstock - 1;
                        cout << "> (You bought a Torn Notebook!)" << endl;
                        cout << "> Thanks! Wa ha ha." << endl;
                        cout << "> ";
                        system("pause");
                        goto purchase;
                    }
                    else {
                        system("cls");
                        cout << "> Sorry, we're sold out!" << endl;
                        cout << "> ";
                        system("pause");
                        goto purchase;
                    }
                }
            case 5:
                goto shop;
            case 6:
                goto shop;
            case 7:
                goto shop;
            case 8:
                goto shop;
            case 9:
                goto shop;
            case 0:
                goto shop;
            }

            //You decide to sell something.
        remove:
        case 2:
            system("cls");
            cout << "Ha! I'm tryin' to get RID of my junk, not get more of it!\nBut I do feel generous today, so what do you have?" << endl;
            cout << "( You currently have " << coins << "G.)" << endl;
            cout << "1. Temmie Flakes - 2G - Amount :" << consumablecandy << endl;
            cout << "2. Crab Apple - 5G - Amount :" << consumable << endl;
            cout << "3. Sea Tea - 5G - Amount:" << consumable2 << endl;
            cout << "4. Tough Glove - 50G - Amount :" << gloves << endl;
            cout << "5. Manly Bandanna - 50G - Amount :" << bandanna << endl;
            cout << "6. Torn Notebook - 50G - Amount :" << notebook << endl;
            cout << "7. Cloudy Glasses - 50G - Amount :" << glasses << endl;
            cout << "8+. Leave";
            cout << "> ";
            cin >> select;
            switch (select) {
            //Selling Temmie Flakes
            case 1:
                if (consumablecandy < 1) { //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 2;
                    consumablecandy = consumablecandy - 1;
                    cout << "(You sold the Temmie Flakes!)" << endl;
                    system("pause");
                    goto remove;
            //Selling Crab Apples
            case 2:
                if (consumable < 1) { //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 5;
                    consumable = consumable - 1;
                    cout << " (You sold the Crab Apple!)" << endl;
                    system("pause");
                    goto remove;
            //Selling Sea Tea
            case 3:
                if (consumable2 < 1) { //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 5;
                    consumable2 = consumable2 - 1;
                    cout << "> (You sold the Sea Tea!)" << endl;
                    system("pause");
                    goto remove;
                    //Selling Tough Gloves
            case 4:
                if (gloves < 1) {  //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 50;
                    gloves = gloves - 1;
                    cout << "> (You sold the Tough Gloves!)" << endl;
                    system("pause");
                    goto remove;
                    //Selling Bandanna
            case 5:
                if (bandanna < 1) { //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl; 
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 50;
                    bandanna = bandanna - 1;
                    cout << "> (You sold the Manly Bandanna!)" << endl;
                    system("pause");
                    goto remove;
                    //Selling Torn Notebook
            case 6:
                if (notebook < 1) { //This section checks if the player actually has the item.
                    system("cls");
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 50;
                    notebook = notebook - 1;
                    notebookstock = notebookstock + 1;
                    cout << "> (You sold the Torn Notebook!)" << endl;
                    system("pause");
                    goto remove;
                    //Selling Cloudy Glasses
            case 7:
                if (glasses < 1) {
                    system("cls"); //This section checks if the player actually has the item.
                    cout << "> You don't have any!" << endl;
                    system("pause");
                    goto remove;
                }
                else {
                    system("cls");
                    coins = coins + 50;
                    glasses = glasses - 1;
                    glassesstock = glassesstock + 1;
                    cout << "> (You sold the Cloudy Glasses!)" << endl;
                    system("pause");
                    goto remove;
            case 8:
                goto shop;
            case 9:
                goto shop;
            case 0:
                goto shop;
                }
                }
                }
                }
                }
                }
                }
            }
        }
    case 3:
        goto begin;
        //Restarts the program.
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu