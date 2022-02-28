
#ifndef FILEHANDLER
#define FILEHANDLER

#include <string>

class FileHandler
{
public:
    FileHandler(const char *fileName);
    
    ~FileHandler();

    std::string readFile() const;

    void writeFile(const std::string &content) const;

    const char *fileName() const;

    bool error() const;

private:
    bool m_error;

    char *m_fileName;
};

#endif
