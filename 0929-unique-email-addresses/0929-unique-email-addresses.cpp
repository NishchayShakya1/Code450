class Solution {
public:
    string parseEmail(string email) {
        int n = email.size();

        bool ignorePlus = false;
        bool afterAt = false;
        string validEmail = "";
        for (int i = 0; i < n; i++) {
          
            if (email[i] == '+')
                ignorePlus = true;

           
            if (email[i] == '@')
                afterAt = true;
            
         
            if (!ignorePlus && !afterAt && email[i] != '.')
                validEmail += email[i];
            
       
            if (afterAt)
                validEmail += email[i];
        }

        return validEmail;
    }
    int numUniqueEmails(vector<string>& emails) {
       
        map<string, int> hash;

        for (auto email : emails) {
            hash[parseEmail(email)] = 1;
        }

        return hash.size();
    }
};