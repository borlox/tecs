// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef LINUX
	#include "targetver.h"
#endif

#include <cassert>

#include <algorithm>

#include <iostream>
#include <fstream>

#include <string>
#include <cctype>

#include <vector>

#include <exception>
#include <stdexcept>

#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/program_options.hpp>
#include <boost/regex.hpp>
#include <boost/variant.hpp>
