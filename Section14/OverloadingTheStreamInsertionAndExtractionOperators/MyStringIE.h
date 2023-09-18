#ifndef _MYSTRINGIE_H_
#define _MYSTRINGIE_H_

class MystringIE
{
    friend std::ostream &operator << (std::ostream &os, const MystringIE &rhs);
    friend std::istream &operator >>(std::istream &in, MystringIE &rhs);
    
    private:
    
    char *str;//pointer to a char[] that holds a c-style string

    public:

    MystringIE();
    MystringIE(const char *s);
    MystringIE(const MystringIE &source);
    MystringIE(MystringIE &&source);
    ~MystringIE();

    MystringIE &operator=(const MystringIE &rhs);
    MystringIE &operator =(MystringIE &&rhs);

    void display()const;
    int get_lenght()const;
    const char *get_str()const;
};

#endif