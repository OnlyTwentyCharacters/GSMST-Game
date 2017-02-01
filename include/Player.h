#include <string>

class Player {
    public:
        Player();
        ~Player();
        
        void setName(std::string n);
        std::string getName();
        
        void setStressness(int stressness);
        void setSmrtness(int smrtness);
        void setAnnoyedness(int annoyedness);
        void setWhatevenness(int whatevenness);
        void setFunnyness(int funnyness);
        void setMadness(int madness);
        void setFriendness(int friendness);
        void setNessness(int nessness);
        
        void printStats();
    private:
        std::string name;
        
        int stressness;
        int smrtness;
        int annoyedness;
        int whatevenness;
        int funnyness;
        int madness;
        int friendness;
        int nessness;
};