#pragma once

#include <vector>
#include <string>

namespace Jagerts::Felcp::IO::Archive
{
    class ArchiveFile
    {
    public:
        static ArchiveFile* Create(size_t size);
        static void Free(const ArchiveFile* const file);
        void SetName(const std::string& name);
        void SetExtension(const std::string& extension);
        const std::string& GetName() const;
        const std::string& GetExtension() const;
        const char* GetData() const;
        char* GetData();
        const size_t& GetSize() const;
    private:
        ArchiveFile(size_t size);
        ~ArchiveFile();
        std::string _name;
        std::string _extension;
        char* _data = NULL;
        size_t _size;
    };
}