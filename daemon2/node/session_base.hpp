// Copyright (C) 2018 Bluzelle
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License, version 3,
// as published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <include/bluzelle.hpp>
#include <node/node_base.hpp>


namespace bzn
{
    class session_base
    {
    public:
        virtual ~session_base() = default;

        /**
         * Start accepting new connections
         * @param handler   callback to execute when connection is established
         */
        virtual void start(bzn::msg_handler handler) = 0;

        /**
         * Send a message to the connected node
         * @param msg       message
         * @param handler   called if there is a response
         */
        virtual void send_msg(const bzn::msg& msg, bzn::msg_handler handler) = 0;
    };

} // bzn
