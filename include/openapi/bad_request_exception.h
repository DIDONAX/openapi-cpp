#pragma once

#include <stdexcept>
#include <string_view>

namespace openapi {

struct bad_request_exception : public std::exception {
  explicit bad_request_exception(std::string_view name) : param_{name} {}
  const char* what() const noexcept override { return "missing parameter"; }
  std::string_view param_;
};

}  // namespace openapi