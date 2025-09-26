#pragma once

#include <stdexcept>
#include <string_view>

namespace openapi {

struct bad_request_exception : public std::exception {
  explicit bad_request_exception(std::string message)
      : message_{std::move(message)} {}
  const char* what() const noexcept override { return "missing parameter"; }
  std::string message_;
};

}  // namespace openapi