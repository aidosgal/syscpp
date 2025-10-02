#pragma once

#include <string>

namespace file_system {
    struct File;

    template<typename FSType>
    struct FileSystem {
        File* get_file(std::string_view file_name)
        {
            return static_cast<FSType*>(this)->get_file_impl(file_name);
        }

        File* create_file(std::string_view file_name)
        {
            return static_cast<FSType*>(this)->create_file_impl(file_name);
        }

        File* remove_file(std::string_view file_name)
        {
            return static_cast<FSType*>(this)->remove_file_impl(file_name);
        }

        File* read_file(File* file, std::vector<char>& data)
        {
            return static_cast<FSType*>(this)->read_file_impl(file, data);
        }

        File* write_file(File* file, std::vector<char>& data)
        {
            return static_cast<FSType*>(this)->wirte_file_impl(file, data);
        }
    };

    template<typename FSType, typename... Args>
    FSType* make_file_system(Args&&... args) noexcept
    {
        void* memory = operator new(sizeof(FSType), std::nothrow);
        if (!memory)
            return nullptr;

        return new(memory) FSType(std::forward<Args>(args)...);
    }

}