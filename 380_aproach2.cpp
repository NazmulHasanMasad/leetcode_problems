class RandomizedSet
{
    unordered_set<int> s;

public:
    RandomizedSet()
    {
    }

    bool insert(int val)
    {
        if (s.find(val) != s.end())
            return false;
        else
        {

            s.insert(val);
            return true;
        }
    }

    bool remove(int val)
    {
        if (s.find(val) == s.end())
            return false;
        else
        {

            s.erase(val);
            return true;
        }
    }

    int getRandom()
    {
        return *next(s.begin(), rand() % s.size());
    }
};
