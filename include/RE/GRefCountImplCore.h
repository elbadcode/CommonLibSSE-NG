#pragma once


namespace RE
{
	class GRefCountImplCore
	{
	public:
		constexpr GRefCountImplCore() : refCount(1), pad0C(0) {}
		virtual ~GRefCountImplCore();	// 00

		static void			CheckInvalidDelete(GRefCountImplCore*);
		constexpr SInt32	GetRefCount() const { return refCount; }

	protected:
		// members
		volatile UInt32	refCount;	// 08
		UInt32			pad0C;		// 0C
	};
	STATIC_ASSERT(sizeof(GRefCountImplCore) == 0x10);
}
