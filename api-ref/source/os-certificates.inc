.. -*- rst -*-

=====================================
 Root certificates (os-certificates)
=====================================

Creates and shows details for a root certificate.

Create Root Certificate
=======================

.. rest_method:: POST /os-certificates

Creates a root certificate.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403)

Response
--------

.. rest_parameters:: parameters.yaml

  - certificate: certificate
  - data: data
  - private_key: private_key

|

**Example Create Root Certificate**

.. literalinclude:: ../../doc/api_samples/os-certificates/certificate-create-resp.json
   :language: javascript

Show Root Certificate Details
=============================

.. rest_method:: GET /os-certificates/root

Shows details for a root certificate.

Normal response codes: 200

Error response codes: unauthorized(401), forbidden(403), itemNotFound(404), notImplemented(501)

Response
--------

.. rest_parameters:: parameters.yaml

  - certificate: certificate
  - data: data
  - private_key: private_key

|

**Example Show Root Certificate Details**

.. literalinclude:: ../../doc/api_samples/os-certificates/certificate-get-root-resp.json
   :language: javascript
