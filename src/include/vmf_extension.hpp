//===----------------------------------------------------------------------===//
//                         DuckDB
//
// vmf_extension.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb.hpp"
#include "vmf_functions.hpp"

namespace duckdb {

class VmfExtension : public Extension {
public:
	void Load(DuckDB &db) override;
	std::string Name() override;
	std::string Version() const override;
};

} // namespace duckdb
