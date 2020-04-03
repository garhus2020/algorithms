void updateRangeUtil(int si, int ss, int se, int us,
                     int ue, int diff)
{
    // out of range
    if (ss>se || ss>ue || se<us)
        return ;
 
    // Current node is a leaf node
    if (ss==se)
    {
        // Add the difference to current node
        tree[si] += diff;
        return;
    }
 
    // If not a leaf node, recur for children.
    int mid = (ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff);
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff);
 
    // Use the result of children calls to update this
    // node
    tree[si] = tree[si*2+1] + tree[si*2+2];
}








LAZY PROPOGATION 





