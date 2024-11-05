/*
 * Copyright (c) 2024, Reimar Pihl Browa <mail@reim.ar>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/Bindings/ExternalPrototype.h>
#include <LibWeb/Bindings/Intrinsics.h>
#include <LibJS/Heap/CellAllocator.h>
#include <LibJS/Runtime/Realm.h>
#include <LibWeb/HTML/External.h>

namespace Web::HTML {

JS_DEFINE_ALLOCATOR(External);

JS::NonnullGCPtr<External> External::create(JS::Realm& realm)
{
    return realm.heap().allocate<External>(realm, realm);
}

void External::initialize(JS::Realm& realm)
{
    Base::initialize(realm);
    WEB_SET_PROTOTYPE_FOR_INTERFACE(External);
}

External::External(JS::Realm& realm)
    : PlatformObject(realm)
{
}

void External::visit_edges(Cell::Visitor& visitor)
{
    Base::visit_edges(visitor);
}

External::~External() = default;

// https://html.spec.whatwg.org/multipage/obsolete.html#dom-external-addsearchprovider
void External::add_search_provider()
{
    // Do nothing.
}

// https://html.spec.whatwg.org/multipage/obsolete.html#dom-external-issearchproviderinstalled
void External::is_search_provider_installed()
{
    // Do nothing.
}

}
