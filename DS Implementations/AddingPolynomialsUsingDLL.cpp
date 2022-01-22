#include <iostream>
using namespace std;
class Node
{
public:
 int coeff, power;
 Node *next;
 Node(int coeff, int power)
 {
 this->coeff = coeff;
 this->power = power;
 this->next = NULL;
 }
};
void addPolynomials(Node *head1, Node *head2)
{
 if (head1 == NULL && head2 == NULL)
 return;
 else if (head1->power == head2->power)
 {
 cout << " " << head1->coeff + head2->coeff << "x^" << head1->power << " ";
 addPolynomials(head1->next, head2->next);
 }
 else if (head1->power > head2->power)
 {
 cout << " " << head1->coeff << "x^" << head1->power << " ";
 addPolynomials(head1->next, head2);
 }
 else
 {
 cout << " " << head2->coeff << "x^" << head2->power << " ";
 addPolynomials(head1, head2->next);
 }
}
void insert(Node *head, int coeff, int power)
{
 Node *new_node = new Node(coeff, power);
 while (head->next != NULL)
 {
 head = head->next;
 }
 head->next = new_node;
}
void printList(Node *head)
{
 cout << "Linked List" << endl;
 while (head != NULL)
 {
 cout << " " << head->coeff << "x"
 << "^" << head->power;
 head = head->next;
 }
}
int main()
{
 cout << "Chinmay Aggarwal" << endl;
 cout << "200911262" << endl;
 cout << "1st polynomial:" << endl;
 cout << "enter coeff of x square:" << endl;
 int x2;
 cin >> x2;
 Node *head = new Node(x2, 2);
 cout << "enter coeff of x:" << endl;
 int x1;
 cin >> x1;
 insert(head, x1, 1);
 cout << "2nd polynomial:" << endl;
 cout << "enter coeff of x square:" << endl;
 int y2;
 cin >> y2;
 Node *head2 = new Node(y2, 2);
 cout << "enter coeff of x:" << endl;
 int y1;
 cin >> y1;
 insert(head2, y1, 1);
 printList(head);
 cout << endl;
 printList(head2);
 cout << endl
 << "Addition:" << endl;
 addPolynomials(head, head2);
 return 0; 
 }