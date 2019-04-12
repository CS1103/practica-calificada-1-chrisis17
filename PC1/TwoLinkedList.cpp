//
// Created by ruben on 4/12/19.
//
#include <iostream>
#include "TwoLinkedList.h"
#include <string>

UTEC::TwoLinkedList::TwoLinkedList(){
        head1 = nullptr;
        head2 = nullptr;
        tail1 = nullptr;
        tail2 = nullptr;
        tail = nullptr;
}

UTEC::TwoLinkedList::~TwoLinkedList(){
	Node *temp1 = head1;
	Node *temp2 = head2;
	while (temp1!=nullptr){
		head1 = head1->sig;
		delete temp1;
		temp1 = head1;
	}
	while (temp2 !=nullptr){
		head2 = head2->sig;
		delete temp2;
		temp2 = head2;
	}
}

void UTEC::TwoLinkedList::push_back1(int valor){
        Node *temp = new Node(valor);
        if (tail1 == nullptr && head1 == nullptr){
		head1 = tail1 = temp;
        }
        else {
                if (tail1 != tail2){
                        tail1->sig = temp;
                        tail1 = temp;
                }
                else {
                        tail->sig = temp;
                        tail = temp;
                }
        }
        std::cout << "se agrego el valor a lista 1" << std::endl;
}

void UTEC::TwoLinkedList::push_back2(int valor){
        Node *temp = new Node(valor);
        if (tail2 == nullptr && head2 == nullptr){
                head2 = tail2 = temp;
        }
        else {
                if (tail1 != tail2){
                        tail2->sig = temp;
                        tail2 = temp;
                }
                else {
                        tail->sig = temp;
                        tail = temp;
                }
        }
        std::cout<<"se agrego el valor a lista 2" << std::endl;
}

std::string UTEC::TwoLinkedList::merge(int valor){
        if (is_merged()) return "operacion duplicada";
        else {
                Node *temp = new Node(valor);
                tail1->sig=temp;
                tail2->sig=temp;
                tail = temp;
                return "operacion exitosa";
        }
}

bool UTEC::TwoLinkedList::is_merged(){
        if (tail1 == tail2 && tail1 == tail) return true;
        return false;
}

std::string UTEC::TwoLinkedList::getlist(int valor){
        Node *temp = head1;
	int contador = 1;
	while (temp!=NULL){
		temp = temp->sig;
		contador++;}
	std::string texto[contador];

        temp=head1;
        int cambio = 0;
        while (temp!=NULL){
                texto[cambio] = std::to_string(temp->get_valor()) + " ";
                cambio++;
                temp = temp->sig;
        }

	return texto;

}

