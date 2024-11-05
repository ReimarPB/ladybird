/*
 * Copyright (c) 2024, Reimar Pihl Browa <mail@reim.ar>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Bindings/PlatformObject.h>

namespace Web::HTML {

class External : public Bindings::PlatformObject {
    WEB_PLATFORM_OBJECT(External, Bindings::PlatformObject);
    JS_DECLARE_ALLOCATOR(External);

public:
    [[nodiscard]] static JS::NonnullGCPtr<External> create(JS::Realm&);

    virtual ~External() override;

    void add_search_provider();
    void is_search_provider_installed();

protected:
    virtual void initialize(JS::Realm&) override;
    virtual void visit_edges(Cell::Visitor&) override;

private:
    explicit External(JS::Realm&);
};

}
