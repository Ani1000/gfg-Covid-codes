 int a[1001];
 int cnt=0;

int check(int a[],int cnt){

 int flag = 0;

    for(int i=0;i<cnt-1;i++){
        if(a[i] >= a[i+1]){
        flag = 1;
        break; }
    }

 if(flag == 0) return 1;
 else if(flag == 1) return 0;

 }

int cnt = 0;

bool isBST(Node* root) {
    // Your code here

   isBST(root->left);
    a[cnt++] = root->data;
    isBST(root->right);

  if(check(n,cnt) == 0) return false;
  else return true;

}

