class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        struct Node *first = head;
        struct Node *second = head;
        while (second->next != NULL)
            second = second->next;
        vector <pair<int, int>> vec;

        while (first != second && second->next != first)
        {
            if ((first->data + second->data) == target)
            {
                vec.push_back({first->data, second->data});
                first = first->next;
                second = second->prev;
            }
            else
            {
                if ((first->data + second->data) < target)
                    first = first->next;
                else
                    second = second->prev;
            }
        }
        return vec;
    }
};
