
#include "stat_types.hpp"
#include <pficommon/network/mprpc.h>


namespace jubatus {

namespace client {

class stat : public pfi::network::mprpc::rpc_client {
public:
  stat(const std::string &host, uint64_t port, double timeout_sec)
    : rpc_client(host, port, timeout_sec) {}

    int32_t push(std::string arg0, std::string arg1, double arg2) {
      return call<int32_t(std::string, std::string, double)>("push")(arg0, arg1, arg2);
    }

    double sum(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("sum")(arg0, arg1, arg2);
    }

    double stddev(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("stddev")(arg0, arg1, arg2);
    }

    double max(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("max")(arg0, arg1, arg2);
    }

    double min(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("min")(arg0, arg1, arg2);
    }

    double entropy(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("entropy")(arg0, arg1, arg2);
    }

    double moment(std::string arg0, std::string arg1, int32_t arg2) {
      return call<double(std::string, std::string, int32_t)>("moment")(arg0, arg1, arg2);
    }

    int32_t save(std::string arg0, std::string arg1) {
      return call<int32_t(std::string, std::string)>("save")(arg0, arg1);
    }

    int32_t load(std::string arg0, std::string arg1) {
      return call<int32_t(std::string, std::string)>("load")(arg0, arg1);
    }

    std::string get_diff(int32_t arg0) {
      return call<std::string(int32_t)>("get_diff")(arg0);
    }

    int32_t put_diff(std::string arg0) {
      return call<int32_t(std::string)>("put_diff")(arg0);
    }

private:
};

} // namespace client

} // namespace jubatus

