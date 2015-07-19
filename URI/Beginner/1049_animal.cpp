#include <iostream>
#include <string>
using namespace std;

class Node{
public:
	Node(string n) : n1(NULL), n2(NULL) {
		nome = n;
	}
	string nome;
	Node* n1;
	Node* n2;
};

int main(int argc, char const *argv[])
{
	Node *vertebrado, *invertebrado, *ptr;
	vertebrado = new Node("vertebrado");
	invertebrado = new Node("invertebrado");

	vertebrado->n1 = new Node("ave");
	vertebrado->n2 = new Node("mamifero");
	ptr = vertebrado->n1; //ave
	ptr->n1 = new Node("carnivoro");
	ptr->n2 = new Node("onivoro");

	ptr = vertebrado->n1->n1;//carnivoro
	ptr->n1 = new Node("aguia");
	ptr = vertebrado->n1->n2;//onivoro
	ptr->n1 = new Node("pomba");

	ptr = vertebrado->n2; //mamifero
	ptr->n1 = new Node("onivoro");
	ptr->n2 = new Node("herbivoro");

	ptr = vertebrado->n2->n1;//onivoro
	ptr->n1 = new Node("homem");
	ptr = vertebrado->n2->n2;//herbivoro
	ptr->n1 = new Node("vaca");

	invertebrado->n1 = new Node("inseto");
	invertebrado->n2 = new Node("anelideo");

	ptr = invertebrado->n1;//inseto
	ptr->n1 = new Node("hematofago");
	ptr->n2 = new Node("herbivoro");

	ptr = invertebrado->n1->n1;//hematofago
	ptr->n1 = new Node("pulga");
	ptr = invertebrado->n1->n2;//herbivoro
	ptr->n1 = new Node("lagarta");

	ptr = invertebrado->n2;//anelideo
	ptr->n1 = new Node("hematofago");
	ptr->n2 = new Node("onivoro");

	ptr = invertebrado->n2->n1;
	ptr->n1 = new Node("sanguessuga");
	ptr = invertebrado->n2->n2;
	ptr->n1 = new Node("minhoca");


	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	
	if(s1 == "vertebrado"){
		ptr = vertebrado;
		if(ptr->n1->nome == s2)
			ptr = ptr->n1;
		else if(ptr->n2->nome == s2)
			ptr = ptr->n2;

		if(ptr->n1->nome == s3)
			ptr = ptr->n1;
		else if(ptr->n2->nome == s3)
			ptr = ptr->n2;
		
		cout << ptr->n1->nome << '\n';
	}else{
		ptr = invertebrado;
		if(ptr->n1->nome == s2)
			ptr = ptr->n1;
		else if(ptr->n2->nome == s2)
			ptr = ptr->n2;

		if(ptr->n1->nome == s3)
			ptr = ptr->n1;
		else if(ptr->n2->nome == s3)
			ptr = ptr->n2;
		
		cout << ptr->n1->nome << '\n';
	}

	return 0;
}
