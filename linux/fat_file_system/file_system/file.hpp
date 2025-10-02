//
// Created by bizzar on 10/2/25.
//
#pragma once

#include <string>

namespace file_system {

struct File {
    [[nodiscard]] virtual size_t get_size() const noexcept = 0;
    [[nodiscard]] virtual size_t get_created_time() const noexcept = 0;
    [[nodiscard]] virtual size_t get_last_modified_time() const noexcept = 0;
    [[nodiscard]] virtual size_t get_name() const noexcept = 0;
};

}