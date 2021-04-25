#ifndef NODE_H_
#define NODE_H_

#include <bits/stdc++.h>

using namespace std;

//use struct as its members are public by default
class Node {
    public:
        int data[3][3];                   //data found found at each state; the new 8-puzzle we acquire after each operation
        Node* parent = nullptr;
        Node* up_child = nullptr;          //the child containing the puzzle after moving tile upward
        Node* down_child = nullptr;        //the child containing the puzzle after moving tile downward
        Node* left_child = nullptr;        //the child containing the puzzle after moving tile leftward
        Node* right_child = nullptr;       //the child containing the puzzle after moving tile rightward

        // val is the value that has to be added to the data part
        Node() {
//            int val;
//
//            for (int i = 0; i < 3; i++) {
//                for (int j = 0; j < 3; j++) {
//                    cout << "Insert value for row " << i << " and column " << j << ":" << endl;
//                    cin >> val;
//                    data[i][j] = i + j;
//                }
//            }
            data[0][0] = 3;
            data[0][1] = 1;
            data[0][2] = 2;
            data[1][0] = 0;
            data[1][1] = 4;
            data[1][2] = 5;
            data[2][0] = 6;
            data[2][1] = 7;
            data[2][2] = 8;

        }

//        Node(int val){
//            for (int i = 0; i < 3; i++) {
//                for (int j = 0; j < 3; j++) {
//                    data[i][j] = val;
//                }
//            }
//        }

        Node(int val[3][3]){
            this->data[3][3] = val[3][3];
        }

    void nodePrint() {
        cout << "Puzzle: " << endl << data[0][0] << " " << data[0][1] << " " << data[0][2] << " "
             << endl << data[1][0] << " " << data[1][1] << " " << data[1][2] << " " << endl
             << data[2][0] << " " << data[2][1] << " " << data[2][2] << " " << endl;
    }


};

#endif