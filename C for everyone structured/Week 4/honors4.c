#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 20
typedef struct node{
    int data;
    struct node* left;
    struct node* right;
} NODE;
typedef NODE* BTREE;


void read_file(FILE* ifp, int *size, int data[]){
    (*size) = 0;
    while(fscanf(ifp, "%d", &data[*size])==1){
        (*size)++;
    }
}
void print_data(int data[],int size, char* title){
    printf("%s\n", title);
    int i;
    for(i=0;i<size;i++){
        printf("%d ", data[i]);
    }
}

void inorder(BTREE root){
    if(root !=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

BTREE new_node(){
    return (malloc(sizeof(NODE)));

}

BTREE init_node(int d, BTREE left, BTREE right){
    BTREE n = new_node();
    n->data = d;
    n->left = left;
    n->right = right;
    return (n);
}

BTREE create_tree(int a[], int i, int size){
    
    if(i<size){
        return init_node(a[i],create_tree(a,i*2+1,size),create_tree(a,i*2+2,size));
    }else{
        return NULL;
    }
}

int main(int argc, char* argv[]){

    FILE* ifp = fopen("h3","r");
    int size;
    int d[MAX_SIZE];
    read_file(ifp, &size, d);
    int num_of_node = d[0];
    int data[num_of_node];
    
    int i;
    for(i = 1;i<size;i++){ //start from 1
        //convert int to char
        data[i-1] = d[i];
       
    }

    print_data(data,num_of_node,"Data in the file: ");
    BTREE root = create_tree(data,0,num_of_node);
    printf("\n\n");
    printf("Inorder: \n");
    inorder(root);
    printf("\n\n");
    return 0;
}