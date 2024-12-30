#include <iostream>
#include <vector>
#include <queue>

using namespace std;
template <typename T>
class Node{
private:
    Node<T> *parent;
    T current;
    Node<T> *left;
    Node<T> *right;
public:
    Node<T>();
    Node<T>(Node<T> *parent, Node<T> *left, Node<T>* right);
};
template <typename T> 
class MyBinaryTree{
    private:
    Node<T> root;
    public:
    MyBinaryTree();
    MyBinaryTree(T arr[], int s);
    MyBinaryTree(vector<T> vec);
    void add(T elem);
    vector<T> bfs();

 };

 template <typename T>
 MyBinaryTree<T>::MyBinaryTree(T arr[], int s){
    if(s<=0){
        return;
    }
    else{
        Node<T> currNode=root;
        currNode.parent=nullptr;
        currNode.current=arr[0];
        currNode.left=nullptr;
        currNode.right=nullptr;
        Node<T>* leftMost=nullptr;
        for (int i=1;i<s;i++){
            if(currNode.left==nullptr){
                *(currNode.left)->current=arr[i];
                leftMost=currNode.left;
            }
            else if(currNode.right==nullptr){
                *(currNode.right)->current=arr[i];
            }
            else if(currNode.parent!=nullptr && currNode.parent->right==nullptr){
                *(currNode.parent->right)=arr[i];
                currNode=* (currNode.parent->right);
            }
            else{
                currNode=*leftMost;
            }
        }
    }    
 }
template <typename T>
vector<T> MyBinaryTree<T>::bfs(){
    queue<T> bsfQueue;
    if(root.current!=NULL){
        bsfQueue.push(root.current);
    }
    while(!bsfQueue.empty()){

    }


}

int main()
{
    return 0;
}