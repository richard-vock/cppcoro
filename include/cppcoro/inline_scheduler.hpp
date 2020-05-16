///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Lewis Baker
// Licenced under MIT license. See LICENSE.txt for details.
///////////////////////////////////////////////////////////////////////////////
#ifndef CPPCORO_INLINE_SCHEDULER_HPP_INCLUDED
#define CPPCORO_INLINE_SCHEDULER_HPP_INCLUDED

#if __has_include(<experimental/coroutine>)
#include <experimental/coroutine>
namespace stde = std::experimental;
#else

#include <coroutine>
namespace stde = std;
#endif

namespace cppcoro
{
	class inline_scheduler
	{
	public:

		inline_scheduler() noexcept = default;

		stde::suspend_never schedule() const noexcept
		{
			return {};
		}
	};
}

#endif
