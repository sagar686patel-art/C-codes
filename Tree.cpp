#include<iostream>
using namespace std;
struct bst
{
    int data;
    int level;
    bst *left,*right;
};

bst *root,*temp,*ttemp,*P;

void init()
{
    root = temp = ttemp = P = NULL;
}

void create_root()
{
    root = new bst;
    cin>>root->data;
    root->level = 0;
    root->left = root->right = NULL;
}

void Add_node(int x)
{
    temp = root;
    int l = 0;
    while(temp != NULL)
    {
        ttemp = temp;
        l = temp->level + 1;
        if(temp->data > x)
        {
            temp = temp->left;
        }
        else
        {
            temp = temp->right;
        }
    }
    P = new bst;
    P->data = x;
    P->left=P->right=NULL;
    P->level = l;
    if(ttemp->data > x)
        ttemp->left = P;
    else
        ttemp->right = P;
}

void In(bst *P)
{
    if(P != NULL)
    {
        In(P->left);
        cout<<"Data : "<<P->data<<"\t"<<"Level : "<<P->level<<endl;
        In(P->right);
    }
}

void get_level(bst *P, int data)
{
    while(P != NULL)
    {
        if(P->data == data)
        {
            cout<<"Data : "<<data<<"\t"<<"Level : "<<P->level;
            return;
        }
        else
        {
            if(P->data > data)
                P = P->left;
            else
                P = P->right;
        }
    }
}

int widthAtLevel(bst *P, int L)
{
    if (P == NULL)
        return 0;

    if (P->level == L)
        return 1;

    return widthAtLevel(P->left, L) + widthAtLevel(P->right, L);
}

int height(bst *P)
{
    if (P == NULL)
        return 0;
    int lh = height(P->left);
    int rh = height(P->right);

    if (lh > rh)
        return lh;
    else
        return rh;
}

int main()
{
    init();
    create_root();
    int x;
    for(int i=0; i<6; i++)
    {
        cin>>x;
        Add_node(x);
    }
    cout<<"Width : "<<widthAtLevel(root,2)<<endl;
    cout<<"Height : "<<height(root);
}