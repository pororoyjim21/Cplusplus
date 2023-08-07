#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{

 char choose, ans,sagot;
 int si=0, count = 0, i, pos;
 string arr[500], todo_insert ,del; // para sa mga array ko na string

 menu:
system("cls");
cout <<"                                        `.-------------------------.`        " << endl;
cout <<"                                        `///////////////////////////`     " << endl;
cout <<"                                         ///////////////////////////`    " << endl;
cout <<"                                         ///////////////////////////`    " << endl;
cout <<"                                         /////////////////`-////////`    " << endl;
cout <<"                                         ///////////////`  `///////`    " << endl;
cout <<"                    TO DO LIST:          //////////////`  `/////////`    " << endl;
cout <<"                                         ////////  `-`  `://////////`    " << endl;
cout <<"                                         ////////-`   `:///-:///////`    " << endl;
cout <<"                                         //////////-.:////:`.///////`    " << endl;
cout <<"                                         ///////////////////////////`    " << endl;
cout <<"                                         ///////////////////////////`    " << endl;
cout <<"                                         `:////////////////////////`     " << endl;
cout <<"                                            `-:::::::::::::::::::-.      " << endl;







 cout << "Choose what to do: " << endl;
 cout << "[A]-Create to do list: " << endl;
 cout << "[B]-Add an Activity on your Todo list" << endl;
 cout << "[C]-Delete an Activity on your Todo list:" << endl;
 cout << "[D]-Finalize your to do list and display" << endl;
    x:
 cout << "Input ans: "; cin >> choose;


    switch(choose){
            case 'A':
            case 'a':       cout << endl << endl;
                            cout << "Enter the amount of list no: " ; cin >> si;
                            cout << "Enter your Todo list: " << endl;





                                    for(i=0; i<si; i++){
                                    cout << "["<< i <<"]. >" ; getline(cin>>std::ws,arr[i]); // create list

                                    }

                                    system("cls");


                            cout << "Now your Todo list is: " << endl;


                            for(i=0; i<si; i++){
                            cout << "\t \t \t \t \t \t \t \t \t|--------------------------------------------|" << endl;
                            cout << "\t \t \t \t \t \t \t \t \t \t[" <<i<<"]. >" << arr[i] << endl;



                                                                }
                        p:
                        cout << endl << endl;
                        cout << "Add an activity on your Todo list or Delete <[1]" << endl;
                        cout <<" |Or|" << endl;
                        cout << "Finalize your todo list and display it.  <[2] " << endl;
                        cout << "Input ans: "; cin >> ans;
                        if(ans=='1'){
                        goto bago;

                        }
                        else if(ans=='2'){
                            system("cls");
                            cout << endl << endl << endl << endl ;
                            cout << "\t \t \t \t This is your to do list: " << endl;
                            for(i=0; i<si; i++){
                            cout << "\t \t \t \t \t \t \t \t \t|--------------------------------------------|" << endl;
                            cout << "\t \t \t \t \t \t \t \t \t \t[" <<i<<"]. >" << arr[i] << endl;



                                                                }


                        }
                        else{
                        cout << "Try again: [Y]: "; cin >>ans;
                            if(ans=='Y'|| ans=='y'){
                                goto p;

                            }
                            else{
                                return 0;
                            }
                        }






                    break;


            case '"':
                bago:
                    redo:
                    cout << "Insert todo list[A], or Delete to do list?[B] " << endl;
                    cin>>ans;
                        if(ans=='A'|| ans == 'a'){

                        cout << "Insert the your to do list!" << endl;
                                    getline(cin>>std::ws,todo_insert);

                                cout << "Which position? "; cin >> pos;


                                    for( i=si;i>pos;i--)
                                    {
                                            arr[i]=arr[i-1];

                                                        }

                                                arr[pos]=todo_insert;


                        cout << "The to do list now is: " << endl;
                            for(i=0; i<si+1; i++){
                        cout << "\t \t \t \t \t \t \t \t \t|--------------------------------------------|" << endl;
                        cout << "\t \t \t \t \t \t \t \t \t \t[" <<i<<"]. >" << arr[i] << endl;
                                                                            }

                        cout << endl;
                         }
                        else if (ans== 'B' || ans == 'b'){
                        goto newdelete;

                        }
                        else {
                            cout << "Try again [Y] ";cin >> ans;
                                if(ans=='y'|| ans=='Y'){
                                    goto redo;

                                }
                                else{
                                    return 0;
                                }
                        }

                break;

            case 'b':
            case 'B':
                cout << endl;
                cout << "You must create an to do list before you can add it :>" << endl;
                cout << "Main menu [Y] "; cin >> ans;
                    if(ans=='Y'|| ans== 'y'){
                        goto menu;

                    }
                    else{
                        return 0;
                    }



                break;

            case 'C':
            case 'c':
                cout << endl;
                cout << "You must create an to do list before you can delete it :>" << endl;
                cout << "Main menu [Y] "; cin >> ans;
                    if(ans=='Y'|| ans== 'y'){
                        goto menu;

                    }
                    else{
                        return 0;
                    }



                break;
            case 'D':
            case 'd':
                cout << endl;
                cout << "You must create an to do list before you can finalize it :>" << endl;
                cout << "Main menu [Y] "; cin >> ans;
                    if(ans=='Y'|| ans== 'y'){
                        goto menu;

                    }
                    else{
                        return 0;
                    }



                break;




            case '!':
                    newdelete:
                    y:
                    cout << "Please type the list you want to delete: ";   getline(cin>>std::ws,del);


                    si+1;
                    for(i=0; i<si; i++){

                                if(arr[i]==del){

                                                for(int j=i; j<(si-1); j++)
                                                {

                                                    arr[j]=arr[j+1];

                                                }
                                                count++;
                                                break;
                                                }



                }

                if(count==0){
                    cout << "Element not found" << endl;
                    cout << "Try again [Y] " ;
                    cin >> sagot;

                        if(sagot=='Y'||sagot=='y'){
                            goto y;

                        }
                        else{
                            return 0;
                        }
                }
                else{

                    cout << endl ;
                    cout << "Now your Todo list is: " << endl;


                            for(i=0; i<si-1; i++){

                            cout << "\t \t \t \t \t \t \t \t \t|--------------------------------------------|" << endl;
                            cout << "\t \t \t \t \t \t \t \t \t \t[" <<i<<"]. >" << arr[i] << endl;



                                                                }

                }
                getch();






                break;






            default: cout << "Try again [Y]";
                     cin >> ans;
                        if(ans=='Y'||ans=='y'){

                            goto x;
                        }
                        else{
                            return 0;
                        }

                    break;
    }





    return 0;
}
