#pragma once
#include <string>
#include <iostream>
#include <memory>
#include <locale>
<<<<<<< HEAD
#include <functional>
=======

>>>>>>> 7345dcb09b30e5c0a5026aa8c293c801325703b5

#define BOOST_ASIO_DISABLE_HANDLER_TYPE_REQUIREMENTS

#include <boost/core/noncopyable.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/system/error_code.hpp>
#include <boost/thread/thread.hpp>
#include <boost/asio/write.hpp>

#define io__ boost::asio

#include "ConnectionData.hpp"
#include "TaskProcessor.hpp"
#include "TaskWrapped.hpp"
