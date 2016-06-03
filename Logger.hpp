#pragma once

#include "fmt/format.h"
#include <iostream>

namespace noob
{
	class logger
	{
		public:
			enum importance
			{
				CRITICAL = 0, ERROR = 1, WARNING = 2, EVENT = 3, INFO = 4, USER = 5
			};

			static void log(const std::string& message, noob::logger::importance i = noob::logger::importance::INFO)
			{
				std::cout << message << std::endl;
			}
	};
}
