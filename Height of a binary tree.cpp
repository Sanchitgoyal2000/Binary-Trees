int binaryheight(TreeNode *root)
{
         if(root==null)
             return 0;
        int h=1,h1=1;
        h=h+height(root.left);
        h1=h1+height(root.right);
        if(h1>h)
           h=h1;
        return h;
	}
