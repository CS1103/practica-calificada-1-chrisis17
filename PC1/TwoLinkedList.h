//                                                                             TwoLinkedList.h                                                                                            /
// Created by ruben on 4/12/19.
//
#include <string>
#include <iostream>
#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

namespace UTEC{

struct Node{
        private:
                int valor;
        public:
                Node *sig;
                Node(int valor) : valor(valor),sig(nullptr){}
                ~Node(){}
                int get_valor(){
                        return valor;
                }
};

class TwoLinkedList {
        private:
                Node *head1;
                Node *head2;
                Node *tail1;
                Node *tail2;
                Node *tail;
        public:
                TwoLinkedList();
                ~TwoLinkedList();
                void push_back1(int);
                void push_back2(int);
                std::string merge(int);
                bool is_merged();
                std::string getlist(int);
                Node *search();
                void save();
                void load();

};
}
#endif //PC1_TWOLINKEDLIST_H

