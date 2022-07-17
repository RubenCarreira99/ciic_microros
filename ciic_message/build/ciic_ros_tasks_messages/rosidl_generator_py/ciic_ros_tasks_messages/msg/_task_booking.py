# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ciic_ros_tasks_messages:msg/TaskBooking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskBooking(type):
    """Metaclass of message 'TaskBooking'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ciic_ros_tasks_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ciic_ros_tasks_messages.msg.TaskBooking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_booking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_booking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_booking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_booking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_booking

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TaskBooking(metaclass=Metaclass_TaskBooking):
    """Message class 'TaskBooking'."""

    __slots__ = [
        '_task_namespace',
        '_action',
        '_performer_identifier',
        '_sender_id',
        '_recipient_id',
    ]

    _fields_and_field_types = {
        'task_namespace': 'string',
        'action': 'string',
        'performer_identifier': 'string',
        'sender_id': 'int64',
        'recipient_id': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_namespace = kwargs.get('task_namespace', str())
        self.action = kwargs.get('action', str())
        self.performer_identifier = kwargs.get('performer_identifier', str())
        self.sender_id = kwargs.get('sender_id', int())
        self.recipient_id = kwargs.get('recipient_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task_namespace != other.task_namespace:
            return False
        if self.action != other.action:
            return False
        if self.performer_identifier != other.performer_identifier:
            return False
        if self.sender_id != other.sender_id:
            return False
        if self.recipient_id != other.recipient_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_namespace(self):
        """Message field 'task_namespace'."""
        return self._task_namespace

    @task_namespace.setter
    def task_namespace(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_namespace' field must be of type 'str'"
        self._task_namespace = value

    @property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value

    @property
    def performer_identifier(self):
        """Message field 'performer_identifier'."""
        return self._performer_identifier

    @performer_identifier.setter
    def performer_identifier(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'performer_identifier' field must be of type 'str'"
        self._performer_identifier = value

    @property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sender_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sender_id = value

    @property
    def recipient_id(self):
        """Message field 'recipient_id'."""
        return self._recipient_id

    @recipient_id.setter
    def recipient_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'recipient_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'recipient_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._recipient_id = value
